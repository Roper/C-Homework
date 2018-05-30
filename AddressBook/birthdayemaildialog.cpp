#include "birthdayemaildialog.h"
#include "ui_birthdayemaildialog.h"

BirthdayEmailDialog::BirthdayEmailDialog(QWidget *parent, QString name):
    QDialog(parent),
    ui(new Ui::BirthdayEmailDialog)
{
    ui->setupUi(this);

    ui->textBrowser->setText(QString("%1:\n"
                             "\t祝生日快乐，健康幸福。\n"
                             "\t\t\tName").arg(name));
}

BirthdayEmailDialog::~BirthdayEmailDialog()
{
    delete ui;
}
