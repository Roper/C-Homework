#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "addpeopledialog.h"
#include "listbyrelationdialog.h"
#include "listbybirthdaydialog.h"
#include "birthdayemaildialog.h"
#include "finddialog.h"
#include "editdialog.h"
#include <QMessageBox>
#include <cstdlib>
#include <QSqlTableModel>
#include <QDialog>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if(!checkConnection())
    {
        QMessageBox::warning(this, "ERROR", "CAN NOT OPEN DATABASE", QMessageBox::Yes);
        exit(1);
    }

    model = new QSqlQueryModel;
    queryString = "select * from people";
    this->fresh();
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnHidden(8, true);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showDataChange(QModelIndex topLeft, QModelIndex bottomRight)
{
    qDebug() << topLeft.column() << topLeft.row();
    qDebug() << bottomRight.column() << bottomRight.row();
}

void MainWindow::fresh()
{
    model->setQuery(queryString);

    ui->tableView->setModel(model);
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
}

void MainWindow::findByMonth(int month)
{
    queryWithCondition(QString("where month = %1").arg(month));
}

void MainWindow::on_actionAdd_A_triggered()
{
    AddPeopleDialog dlg;
    if(dlg.exec() == QDialog::Accepted)
        this->fresh();
}

void MainWindow::on_actionDelete_D_triggered()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = ui->tableView->model()->index(curRow, 0);
    QString name = ui->tableView->model()->data(index).toString();
    deleteFromDb(name);
    this->fresh();
}

void MainWindow::on_actionFind_F_triggered()
{
    findDialog *dlg = new findDialog(this);
    connect(dlg, SIGNAL(sendData(QString)), this, SLOT(findByName(QString)));
    dlg->show();
}


void MainWindow::on_actionBirthday_B_triggered()
{
    queryWithCondition("order by year*10000+month*100+day");
}

void MainWindow::on_actionName_N_triggered()
{
    queryWithCondition("order by 1");
}

void MainWindow::on_actionRelationship_triggered()
{
    ListByRelationDialog *dlg = new ListByRelationDialog(this);
    connect(dlg, SIGNAL(sendData(QString)), this, SLOT(findByRelation(QString)));
    dlg->show();
}

void MainWindow::on_actionBirthday_triggered()
{
    ListByBirthdayDialog *dlg = new ListByBirthdayDialog(this);
    connect(dlg, SIGNAL(sendData(int)), this, SLOT(findByMonth(int)));
    dlg->show();
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

    queryWithCondition(QString("where sortAnchor >= %1 and sortAnchor <= %2").arg(tmp).arg(tmp5));
}

void MainWindow::on_actionBirthdayEmail_E_triggered()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = ui->tableView->model()->index(curRow, 0);
    QString name = ui->tableView->model()->data(index).toString();

    BirthdayEmailDialog *dlg = new BirthdayEmailDialog(this, name);
    dlg->show();
}

void MainWindow::on_actionEdit_E_triggered()
{
    int curRow = ui->tableView->currentIndex().row();
    QString name = model->index(curRow,0).data().toString();
    int year = model->index(curRow, 1).data().toInt();
    int month = model->index(curRow, 2).data().toInt();
    int day = model->index(curRow, 3).data().toInt();
    QString relation = model->index(curRow, 4).data().toString();
    QString tel = model->index(curRow, 5).data().toString();
    QString emailAddr = model->index(curRow, 6).data().toString();
    QString special = model->index(curRow, 7).data().toString();

    EditDialog *dlg = new EditDialog(this, name, year, month, day, relation, tel, emailAddr, special);
    connect(dlg, SIGNAL(accepted()), this, SLOT(fresh()));
    dlg->show();
}
