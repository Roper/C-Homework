#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QModelIndex>
#include <QSqlQueryModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void fresh();

private slots:
    void findByName(QString name);
    void findByRelation(QString name);
    void findByMonth(int month);
    void showDataChange(QModelIndex topLeft, QModelIndex bottomRight);

    void on_actionAdd_A_triggered();
    void on_actionDelete_D_triggered();
    void on_actionFind_F_triggered();
    void on_actionBirthday_B_triggered();
    void on_actionName_N_triggered();
    void on_actionRelationship_triggered();
    void on_actionBirthday_triggered();

    void on_actionBirthday_B_2_triggered();

    void on_actionBirthdayEmail_E_triggered();

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
};

#endif // MAINWINDOW_H
