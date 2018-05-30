#include "listbyrelationdialog.h"
#include "ui_listbyrelationdialog.h"
#include "people.h"

ListByRelationDialog::ListByRelationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListByRelationDialog)
{
    ui->setupUi(this);

    ui->relationComboBox->addItems(People::relations);
}

ListByRelationDialog::~ListByRelationDialog()
{
    delete ui;
}

void ListByRelationDialog::on_canclePushButton_clicked()
{
    close();
}

void ListByRelationDialog::on_okPushButton_clicked()
{
    emit sendData(ui->relationComboBox->currentText());
    close();
}
