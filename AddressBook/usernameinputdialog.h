#ifndef USERNAMEINPUTDIALOG_H
#define USERNAMEINPUTDIALOG_H

#include <QDialog>

namespace Ui {
class UsernameInputDialog;
}

class UsernameInputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UsernameInputDialog(QWidget *parent = 0);
    ~UsernameInputDialog();

signals:
    void sendData(QString name);

private slots:
    void on_canclePushButton_clicked();
    void on_okPushButton_clicked();

private:
    Ui::UsernameInputDialog *ui;
};

#endif // USERNAMEINPUTDIALOG_H
