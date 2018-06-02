#include "people.h"
#include "mainwindow.h"
#include "connection.h"
#include "finddialog.h"
#include "editdialog.h"
#include "ui_mainwindow.h"
#include "addpeopledialog.h"
#include "usernameinputdialog.h"
#include "listbyrelationdialog.h"
#include "listbybirthdaydialog.h"
#include <cstdlib>
#include <QDialog>
#include <QDateTime>
#include <QMessageBox>
#include <QSqlTableModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Address Book");

    if(!checkConnection())
    {
        QMessageBox::warning(this, "ERROR", "CAN NOT OPEN DATABASE", QMessageBox::Yes);
        exit(1);
    }

    QSqlQuery *query = new QSqlQuery;
    query->exec("select * from status where id = 0");
    query->next();
    count = query->value(1).toInt();
    showSpecial = query->value(2).toInt();
    queryString = query->value(3).toString();
    userName = query->value(4).toString();

    model = new QSqlQueryModel;
    this->fresh();
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setColumnHidden(9, true);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    connect(ui->tableView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(on_actionEdit_E_triggered()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fresh()
{
    model->setQuery(queryString);

    ui->tableView->setModel(model);
    if(showSpecial != -1)
    {
        ui->tableView->setColumnHidden(8, false);
        model->setHeaderData(8, Qt::Horizontal, People::indexToSpecial(showSpecial));
    }
    else
        ui->tableView->setColumnHidden(8, true);
    ui->tableView->horizontalHeader()->setStretchLastSection(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}

void MainWindow::queryWithCondition(QString condition)
{
    queryString = "select * from people " + condition;
    fresh();
}

void MainWindow::findByName(QString name)
{
    queryWithCondition(QString("where name = '%1'").arg(name));
}

void MainWindow::findByRelation(QString relation)
{
    queryWithCondition(QString("where relation = '%1'").arg(relation));
    if(ui->tableView->isColumnHidden(8))
        ui->tableView->setColumnHidden(8, false);
    showSpecial = People::relationToIndex(relation);
    model->setHeaderData(8, Qt::Horizontal, People::indexToSpecial(showSpecial));
}

void MainWindow::findByMonth(int month)
{
    queryWithCondition(QString("where month = %1").arg(month));
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QSqlQuery *query = new QSqlQuery;
    query->prepare("update status set count = ?, showSpecial = ?, lastQuery = ?, username = ? where id = 0");
    query->bindValue(0, count);
    query->bindValue(1, showSpecial);
    query->bindValue(2, queryString);
    query->bindValue(3, userName);
    query->exec();
}

void MainWindow::changUsername(QString name)
{
    if(name.isEmpty())
        userName = "匿名";
    else
        userName = name;
}

void MainWindow::on_actionAdd_A_triggered()
{
    AddPeopleDialog *dlg = new AddPeopleDialog(this, count);
    if(dlg->exec() == QDialog::Accepted)
    {
        count ++;
        this->fresh();
    }
}

void MainWindow::on_actionDelete_D_triggered()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = ui->tableView->model()->index(curRow, 0);
    int id = ui->tableView->model()->data(index).toInt();
    deleteFromDb(id);
    this->fresh();
}

void MainWindow::on_actionFind_F_triggered()
{
    findDialog *dlg = new findDialog(this);
    connect(dlg, SIGNAL(sendData(QString)), this, SLOT(findByName(QString)));
    dlg->exec();
}


void MainWindow::on_actionBirthday_B_triggered()
{
    queryWithCondition("order by year*10000+month*100+day");
}

void MainWindow::on_actionName_N_triggered()
{
    queryWithCondition("order by 2");
}

void MainWindow::on_actionRelationship_triggered()
{
    ListByRelationDialog *dlg = new ListByRelationDialog(this);
    connect(dlg, SIGNAL(sendData(QString)), this, SLOT(findByRelation(QString)));
    dlg->exec();
}

void MainWindow::on_actionBirthday_triggered()
{
    ListByBirthdayDialog *dlg = new ListByBirthdayDialog(this);
    connect(dlg, SIGNAL(sendData(int)), this, SLOT(findByMonth(int)));
    dlg->exec();
}

void MainWindow::on_actionBirthday_B_2_triggered()
{
    QDate current = QDate::currentDate();
    int day = current.day();
    int month = current.month();
    int year = current.year();
    int tmp = year * 10000 + month * 100 + day;

    QDate later = QDate::currentDate().addDays(5);
    int day5 = later.day();
    int month5 = later.month();
    int year5 = later.year();
    int tmp5 = year5 * 10000 + month5 * 100 + day5;

    queryWithCondition(QString("where year*10000+month*100+day >= %1 and year*10000+month*100+day <= %2").arg(tmp).arg(tmp5));
}

void MainWindow::on_actionEdit_E_triggered()
{
    int curRow = ui->tableView->currentIndex().row();
    int id = model->index(curRow, 0).data().toInt();
    QString name = model->index(curRow,1).data().toString();
    int year = model->index(curRow, 2).data().toInt();
    int month = model->index(curRow, 3).data().toInt();
    int day = model->index(curRow, 4).data().toInt();
    QString relation = model->index(curRow, 5).data().toString();
    QString tel = model->index(curRow, 6).data().toString();
    QString emailAddr = model->index(curRow, 7).data().toString();
    QString special = model->index(curRow, 8).data().toString();

    if(userName.isEmpty())
        on_actionChange_Username_triggered();
    EditDialog *dlg = new EditDialog(this, id, name, year, month, day, relation, tel, emailAddr, special, userName);
    connect(dlg, SIGNAL(accepted()), this, SLOT(fresh()));
    dlg->show();
}

void MainWindow::on_actionHome_H_triggered()
{
    queryString = "select * from people";
    showSpecial = -1;
    fresh();
}

void MainWindow::on_actionChange_Username_triggered()
{
    UsernameInputDialog *dlg = new UsernameInputDialog(this);
    connect(dlg, SIGNAL(sendData(QString)), this, SLOT(changUsername(QString)));
    dlg->exec();
}
