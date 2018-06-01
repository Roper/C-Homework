#include "people.h"
#include "editdialog.h"
#include "mainwindow.h"
#include "ui_editdialog.h"
#include <QDate>
#include <qDebug>
#include <string>
#include <QSqlQuery>
#include <QSqlError>

EditDialog::EditDialog(QWidget *parent = 0, QString name = "", int year = 0, int month = 0, int day = 0,
                       QString relation = "", QString tel = "", QString emailAddr = "", QString special = "") :
    QDialog(parent),
    ui(new Ui::EditDialog)
{
    ui->setupUi(this);

    this->setFixedSize(this->width(), this->height());

    ui->nameLineEdit->setEnabled(false);
    ui->birthdayLineEdit->setEnabled(false);
    ui->nameLineEdit->setText(name);
    QDate *date = new QDate(year, month, day);
    ui->birthdayLineEdit->setText(date->toString("yyyy/MM/dd"));
    ui->relationComboBox->addItems(People::relations);
    ui->relationComboBox->setCurrentText(relation);
    ui->telLineEdit->setText(tel);
    ui->emailLineEdit->setText(emailAddr);
    ui->specialLineEdit->setText(special);

}

EditDialog::~EditDialog()
{
    delete ui;
}

void EditDialog::on_canclePushButton_clicked()
{
    close();
}

void EditDialog::on_relationComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
        case 0:
            ui->specialLabel->setText("学校");
            break;
        case 1:
            ui->specialLabel->setText("认识地");
            break;
        case 2:
            ui->specialLabel->setText("单位");
            break;
        case 3:
            ui->specialLabel->setText("称呼");
    }
}

void EditDialog::on_okPushButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString relation = ui->relationComboBox->currentText();
    QString tel = ui->telLineEdit->text();
    QString email = ui->emailLineEdit->text();
    QString special = ui->specialLineEdit->text();

    QSqlQuery *query = new QSqlQuery;
    query->prepare("update people set relation=:relation, tel=:tel, emailAddr=:emailAddr, special=:special where name=:name");
    query->bindValue(0, relation);
    query->bindValue(1, tel);
    query->bindValue(2, email);
    query->bindValue(3, special);
    query->bindValue(4, name);
    query->exec();

    qDebug() << query->lastError();
    accept();
}
