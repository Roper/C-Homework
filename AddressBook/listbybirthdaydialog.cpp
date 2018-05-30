#include "listbybirthdaydialog.h"
#include "ui_listbybirthdaydialog.h"
#include <string>

ListByBirthdayDialog::ListByBirthdayDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListByBirthdayDialog)
{
    ui->setupUi(this);

    for(int i = 1; i <= 12; i ++)
        ui->birthdayComboBox->addItem(QString::fromStdString(std::to_string(i)));
}

ListByBirthdayDialog::~ListByBirthdayDialog()
{
    delete ui;
}

void ListByBirthdayDialog::on_canclePushButton_clicked()
{
    close();
}

void ListByBirthdayDialog::on_okPushButton_clicked()
{
    emit sendData(ui->birthdayComboBox->currentText().toInt());
    close();
}
