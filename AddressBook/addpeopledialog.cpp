#include "addpeopledialog.h"
#include "ui_addpeopledialog.h"
#include "connection.h"
#include "people.h"
#include <QDialog>
#include <QMessageBox>

AddPeopleDialog::AddPeopleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPeopleDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());

    ui->relationBox->addItems(People::relations);
}

AddPeopleDialog::~AddPeopleDialog()
{
    delete ui;
}

void AddPeopleDialog::on_okPushButton_clicked()
{
    if(ui->nameEdit->text().trimmed() == "")
        QMessageBox::warning(this, "WARNING", "性名不能为空", QMessageBox::Yes);
    else
    {
        int year = ui->birthdayDateEdit->date().year();
        int month = ui->birthdayDateEdit->date().month();
        int day = ui->birthdayDateEdit->date().day();
        insertToDb(ui->nameEdit->text().trimmed(),
                   ui->birthdayDateEdit->date().year(),
                   ui->birthdayDateEdit->date().month(),
                   ui->birthdayDateEdit->date().day(),
                   ui->relationBox->currentText().trimmed(),
                   ui->phoneEdit->text().trimmed(),
                   ui->emailEdit->text().trimmed(),
                   ui->specialEdit->text().trimmed());
        accept();
    }
}

void AddPeopleDialog::on_relationBox_currentIndexChanged(int index)
{
    switch(index)
    {
        case 0:
            ui->changableLabel->setText("学校");
            break;
        case 1:
            ui->changableLabel->setText("认识地");
            break;
        case 2:
            ui->changableLabel->setText("单位");
            break;
        case 3:
            ui->changableLabel->setText("称呼");
    }
}

void AddPeopleDialog::on_cancelPushButton_clicked()
{
    close();
}
