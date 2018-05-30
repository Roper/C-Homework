#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "addpeopledialog.h"
#include "listbyrelationdialog.h"
#include "listbybirthdaydialog.h"
#include "birthdayemaildialog.h"
#include "finddialog.h"
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

void MainWindow::fresh()
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("people");
    model->setSort(1, Qt::AscendingOrder);
    model->select();

    ui->tableView->setModel(model);
}

void MainWindow::findByName(QString name)
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("people");
    model->setSort(1, Qt::AscendingOrder);
    model->setFilter(QString("name = '%1'").arg(name));
    model->select();

    ui->tableView->setModel(model);
}

void MainWindow::findByRelation(QString relation)
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("people");
    model->setSort(1, Qt::AscendingOrder);
    model->setFilter(QString("relation = '%1'").arg(relation));
    model->select();

    ui->tableView->setModel(model);
}

void MainWindow::findByMonth(int month)
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("people");
    model->setSort(1, Qt::AscendingOrder);
    model->setFilter(QString("month = %1").arg(month));
    model->select();

    ui->tableView->setModel(model);
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

    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("people");
    model->setSort(8, Qt::AscendingOrder);
    model->select();

    ui->tableView->setModel(model);
}

void MainWindow::on_actionName_N_triggered()
{

    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("people");
    model->setSort(0, Qt::AscendingOrder);
    model->select();

    ui->tableView->setModel(model);
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

    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("people");
    model->setSort(1, Qt::AscendingOrder);
    model->setFilter(QString("sortAnchor >= %1 and sortAnchor <= %2").arg(tmp).arg(tmp5));
    model->select();

    ui->tableView->setModel(model);
}

void MainWindow::on_actionBirthdayEmail_E_triggered()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = ui->tableView->model()->index(curRow, 0);
    QString name = ui->tableView->model()->data(index).toString();

    BirthdayEmailDialog *dlg = new BirthdayEmailDialog(this, name);
    dlg->show();
}
