#include "finddialog.h"
#include "ui_finddialog.h"

findDialog::findDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::findDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
}

findDialog::~findDialog()
{
    delete ui;
}

void findDialog::on_canclePushButton_clicked()
{
    close();
}

void findDialog::on_okPushButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    emit sendData(name.trimmed());
    close();
}
