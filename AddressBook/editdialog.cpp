#include "people.h"
#include "editdialog.h"
#include "mainwindow.h"
#include "ui_editdialog.h"
#include "birthdayemaildialog.h"
#include <QDate>
#include <qDebug>
#include <string>
#include <QSqlQuery>
#include <QSqlError>

EditDialog::EditDialog(QWidget *parent = 0, int id = 0, QString name = "", int year = 0, int month = 0, int day = 0,
                       QString relation = "", QString tel = "", QString emailAddr = "", QString special = "") :
    QDialog(parent),
    ui(new Ui::EditDialog)
{
    ui->setupUi(this);

    this->setFixedSize(this->width(), this->height());

    EditDialog::id = id;
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
    QString relation = ui->relationComboBox->currentText();
    QString tel = ui->telLineEdit->text();
    QString email = ui->emailLineEdit->text();
    QString special = ui->specialLineEdit->text();

    QSqlQuery *query = new QSqlQuery;
    query->prepare("update people set relation=:relation, tel=:tel, emailAddr=:emailAddr, special=:special where id=:id");
    query->bindValue(":relation", relation);
    query->bindValue(":tel", tel);
    query->bindValue(":emailAddr", email);
    query->bindValue(":special", special);
    query->bindValue(":id", id);
    query->exec();

    accept();
}

void EditDialog::on_birthdayCardPushButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    ui->birthdayEmailTextBrowser->setText(QString("%1:\n"
                             "\t祝生日快乐，健康幸福。\n"
                             "\t\t\tName").arg(name));
}
