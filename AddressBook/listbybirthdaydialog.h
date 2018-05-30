#ifndef LISTBYBIRTHDAYDIALOG_H
#define LISTBYBIRTHDAYDIALOG_H

#include <QDialog>

namespace Ui {
class ListByBirthdayDialog;
}

class ListByBirthdayDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListByBirthdayDialog(QWidget *parent = 0);
    ~ListByBirthdayDialog();

signals:
    void sendData(int month);

private slots:
    void on_canclePushButton_clicked();

    void on_okPushButton_clicked();

private:
    Ui::ListByBirthdayDialog *ui;
};

#endif // LISTBYBIRTHDAYDIALOG_H
