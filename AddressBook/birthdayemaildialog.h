#ifndef BIRTHDAYEMAILDIALOG_H
#define BIRTHDAYEMAILDIALOG_H

#include <QDialog>

namespace Ui {
class BirthdayEmailDialog;
}

class BirthdayEmailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BirthdayEmailDialog(QWidget *parent = 0, QString name = "");
    ~BirthdayEmailDialog();

private:
    Ui::BirthdayEmailDialog *ui;
};

#endif // BIRTHDAYEMAILDIALOG_H
