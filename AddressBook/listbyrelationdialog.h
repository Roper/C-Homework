#ifndef LISTBYRELATIONDIALOG_H
#define LISTBYRELATIONDIALOG_H

#include <QDialog>

namespace Ui {
class ListByRelationDialog;
}

class ListByRelationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListByRelationDialog(QWidget *parent = 0);
    ~ListByRelationDialog();

signals:
    void sendData(QString);

private slots:
    void on_canclePushButton_clicked();
    void on_okPushButton_clicked();

private:
    Ui::ListByRelationDialog *ui;
};

#endif // LISTBYRELATIONDIALOG_H
