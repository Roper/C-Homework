#include "usernameinputdialog.h"
#include "ui_usernameinputdialog.h"

UsernameInputDialog::UsernameInputDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UsernameInputDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->raise();
}

UsernameInputDialog::~UsernameInputDialog()
{
    delete ui;
}

void UsernameInputDialog::on_canclePushButton_clicked()
{
    close();
}

void UsernameInputDialog::on_okPushButton_clicked()
{
    emit sendData(ui->nameLineEdit->text());
    close();
}
