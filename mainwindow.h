#pragma once
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMainWindow>
#include <QtSql>
#include "sqlite.h"
#include <QMap>
//#include <QSQLITE>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void accepted();
    void rejected();

private slots:
    void on_actionexit_triggered();

    //void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_lineEdit_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_actionadmin_mode_triggered();

    void on_actioncheck_messages_triggered();

    void on_actionhelp_triggered();
    void displayusers();
    void displaymessages();
   // void on_pushButton_2_toggled(bool checked);

    //void on_pushButton_2_clicked();
    bool logininapp(const QString _login, const QString _pass, QSqlDatabase db, QSqlRecord _rec);
    void on_pushButton_clicked(bool checked);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_stackedWidget_currentChanged(int arg1);

    void on_check_user_ban_clicked();

    void on_pBlogout_clicked();

    //void on_checkBox_clicked();

    void on_checkBox_block_clicked();

    //void on_bantime_itemClicked(QListWidgetItem *item);

   // void on_bantime_itemChanged(QListWidgetItem *item);

    void on_actionset_ban_triggered();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pBadduser_clicked();

    void on_pBsubmit_clicked();

    void on_pBdeleteuser_clicked();

    void on_tabViewusers_clicked(const QModelIndex &index);

    void on_tableViewmessages_clicked(const QModelIndex &index);

    void on_pBnext_clicked();

    void on_pBback_clicked();

    void on_pBadd_clicked();

    void on_pBdel_clicked();

    void on_pBsub_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;

    QSqlTableModel *model2;
    QSqlTableModel *model1;
    QSqlTableModel *model3;
    int row;
    int res;


};
