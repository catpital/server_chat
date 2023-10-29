#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QDebug>
QString login="l";
QString pass="p";
int ban=0;
bool logok=false;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{

    ui->setupUi(this);
    ui->frame_login_adm->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionexit_triggered()
{
QApplication::quit();
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{

}

void MainWindow::on_lineEdit_editingFinished()
{

login=ui->lineEdit->text();

}

void MainWindow::on_lineEdit_2_editingFinished()
{
pass=ui->lineEdit_2->text();

}

void MainWindow::on_actionadmin_mode_triggered()
{
MainWindow::on_pushButton_clicked(true);

}

void MainWindow::on_actioncheck_messages_triggered()
{

   if (logok){
        ui->stackedWidget->setCurrentIndex(4);
            }
   else {QMessageBox::warning(this, "" ,"Need to login" );}
}



void MainWindow::on_actionhelp_triggered()
{

}

void MainWindow::on_pushButton_clicked(bool checked) //admin mode
{

if (checked){ui->pushButton->setChecked(true);}
ui->pushButton->setEnabled(false);
ui->actionadmin_mode->setEnabled(false);
ui->frame_login_adm->setVisible(true);
ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_buttonBox_accepted()
{
if (login=="login" && pass=="pass")
{
        QMessageBox::information(this, "yes", "Sacsess!");
        ui->pushButton->setChecked(true);
        ui->pushButton->setEnabled(false);
        logok=true;
ui->stackedWidget->setCurrentIndex(1);

}
else {QMessageBox::warning(this, "Not", "Not acsess");}

ui->lineEdit->clear();
ui->lineEdit_2->clear();
emit accepted();
}


void MainWindow::on_buttonBox_rejected()
{
//emit rejected();
MainWindow::on_pBlogout_clicked();
}


void MainWindow::on_stackedWidget_currentChanged(int arg1)
{

}

void MainWindow::on_check_user_ban_clicked()
{

int timeban;
timeban=ui->bantime->currentRow();
if(timeban>=0){
//QString stimeban=QString::number(timeban);
QString stimeban=ui->bantime->currentItem()->text();
QMessageBox::information(this, " b", stimeban);
//if (!ui->bantime->currentItem()){
//ui->bantime->selectedItems();}
//QString str=ui->bantime->currentItem()->text();
//ban=str.toInt();

//QString mytext=QString("You Set ban to time %1").arg(ui->bantimeitem);
//QString bantext=QString ("is banned ")+ "ban " + QString::number(ban);
//QString bantext=QString ("is banned ")+ "ban " + str;
}
else {QMessageBox::information(this, "Yes" , "bantext");}


//ui->listWidget->currentItem()->setStyleSheet("background-color:ligthblue;");
ui->listWidget->currentItem()->setBackground(Qt::cyan);
ui->check_user_ban->setChecked(false);


//}
}

void MainWindow::on_checkBox_block_clicked()
{
if (ui->checkBox_block->isChecked()){

QString blocktext=QString ("is blocked ");
QMessageBox::information(this, "Yes" , blocktext);

ui->listWidget->currentItem()->setBackground(Qt::darkYellow);
ui->checkBox_block->setChecked(false);
                                    }
}

void MainWindow::on_pBlogout_clicked() //logout
{
ui->pushButton->setEnabled(true);
ui->stackedWidget->setCurrentIndex(0);
ui->frame_login_adm->setVisible(false);
ui->pushButton->setChecked(false);
ui->actionadmin_mode->setEnabled(true);
logok=false;
}

//void MainWindow::on_bantime_itemClicked(QListWidgetItem *item)
//{
//ui->bantime->currentItem()->setBackground(Qt::blue);
//}

void MainWindow::on_actionset_ban_triggered() // ban menu
{
if (logok){ ui->stackedWidget->setCurrentIndex(3);
}
else {QMessageBox::warning(this, "" ,"Need to login" );}
}


void MainWindow::on_pushButton_2_clicked()
{
if (logok){ ui->stackedWidget->setCurrentIndex(3);}
else {QMessageBox::warning(this, "" ,"Need to login" );}
}


void MainWindow::on_pushButton_3_clicked()
{
if (logok){ ui->stackedWidget->setCurrentIndex(4);}
else {QMessageBox::warning(this, "" ,"Need to login" );}
}

