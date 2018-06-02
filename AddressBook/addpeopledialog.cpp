#include "people.h"
#include "connection.h"
#include "addpeopledialog.h"
#include "ui_addpeopledialog.h"
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
    ui->changableLabel->setText(People::indexToSpecial(index));
}

void AddPeopleDialog::on_cancelPushButton_clicked()
{
    close();
}
