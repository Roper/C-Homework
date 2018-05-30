#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

namespace Ui {
class findDialog;
}

class findDialog : public QDialog
{
    Q_OBJECT

public:
    explicit findDialog(QWidget *parent = 0);
    ~findDialog();

signals:
    void sendData(QString);

private slots:
    void on_canclePushButton_clicked();
    void on_okPushButton_clicked();

private:
    Ui::findDialog *ui;
};

#endif // FINDDIALOG_H
