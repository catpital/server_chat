#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QAbstractItemView>
#include <QMessageBox>
#include <QString>
#include <QTableView>
#include <QMap>
//#include "connectiondb.h"
QString login="l";
QString pass="p";
int ban=0;
bool logok=false;
//QSqlRecord rec;
int users=0;
int messages=0;

QMap <QString , QString> Usersmap;
//QObject::connect(MainWindow, MainWindow::on_buttonBox_accepted(), this, Mainwindow::loginapp );
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    connect(this, SIGNAL (on_pushButton_2_clicked), this, SLOT (displayusers));
    connect(this, SIGNAL (on_pushButton_3_clicked), this, SLOT (displaymessages));
    connect(ui->groupBox, SIGNAL(buttonBox_accepted()), this, SLOT(logininapp(QString,QString,QSqlDatabase,QSqlRecord)));
    ui->setupUi(this);
    ui->frame_login_adm->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);

    db=QSqlDatabase::addDatabase("QSQLITE"); //QPSQL or QSQLITE
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE", "testDB");
    db.setDatabaseName("./testDB.db"); //QSQLITE
     //    db.setUserName("postgres");
    //    db.setPassword("postgres");

    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open())
    {
        qDebug("open");
        QString tableString("Users1");
        // QSqlQuery q;
        QSqlQuery *query = new QSqlQuery(db);
        //  query=new QSqlQuery(db);
        query->exec();
        qDebug()<<db.lastError().text();
        query->exec(QString("CREATE TABLE IF NOT EXISTS %1 (ID integer AUTO_INCREMENT PRIMARY KEY, Firstname TEXT, Lastname TEXT, Email TEXT, Pass TEXT,  Login TEXT,  Blocking INTEGER)").arg(tableString));
        qDebug()<<db.lastError().text();
        tableString="Messages";
        query->exec("CREATE TABLE IF NOT EXISTS Messages (ID integer AUTO_INCREMENT PRIMARY KEY, fromuser TEXT, touser TEXT, messag TEXT)");
        query->exec("INSERT INTO Messages (ID, fromuser, touser, messag) VALUES (1, 'test', 'test', 'message Hello!' )");
        qDebug()<<db.lastError().text();
        query->exec("INSERT INTO Users1 (ID, Firstname, Lastname, Email, Pass, Login, Blocking) VALUES (4, 'Fname', 'Lname', 'test@test.ru', 'pass', 'login', 0)");
        query->exec("INSERT into Users1 (ID, Firstname, Lastname, Email, Pass, Login, Blocking) VALUES (5, 'Admin', 'Lname', 'test@test.ru', 'adm', 'log', 0)");
        query->exec("INSERT into Users1 (ID, Firstname, Lastname, Email, Pass, Login, Blocking) values (6, 'Admin', 'Lname', 'test@test.ru', 'pass', 'login', 0 )");
        //{qDebug()<<"rec not normal";}

        //qDebug() << "Number of Rows: " << qry.size();

        query->exec();

        model2=new QSqlTableModel(this,db);
        model2->setTable("Messages");
        model2->select();
        model2->setEditStrategy(QSqlTableModel::OnRowChange);
        ui->tableViewmessages ->setModel(model2);

        model1=new QSqlTableModel(this,db);
            // model->setQuery(*query);
        if (query->isActive()){qDebug() << "opened success\n";}

        model1->setTable("Users1");
        model1->select();
        model1->setEditStrategy(QSqlTableModel::OnRowChange);
        ui->tabViewusers ->setModel(model1);
       // displayusers();

        query->exec();
        model3=new QSqlTableModel(this,db);
        model3->setTable("Messages");
        model3->select();
        model3->setEditStrategy(QSqlTableModel::OnRowChange);
        ui->tableViewmess2 ->setModel(model3);

        //  qDebug()<<db.lastError().text();
        query->clear();
        query->exec("SELECT * FROM Users1");

        if (query->isActive())
                {
            while(query->next())
            {users++;}
                 }
        else {users=0;}
       // qDebug()<<"db open display number2";
        //users=query->record().count();
        ui->lcdNumber->display(users);

        query->exec("SELECT Pass, Login FROM Users1");

                       qDebug()<<db.lastError().text();
 //displayusers();


        //              //  displaymessages();

        QSqlRecord rec = query->record();

      //  QMapIterator<QString, QString> i(Usersmap);
        //auto i=Usersmap.cbegin()  ;
        Usersmap.begin();
        while (query->next())
        {
            QString dbpass=query->value(rec.indexOf("Pass")).toString();
            QString dblogin=query->value(rec.indexOf("Login")).toString();

            //um.first.push_back()=dblogin;
            //um.second.push_back=dbpass;
            //Usersmap [dblogin]=dbpass;
            qDebug()<<"login "<< dblogin;
            qDebug()<<"pass "<< dbpass;
            Usersmap.insert(dblogin, (dbpass));

            //Usersmap.last();
            //               i.Usersmap.first.insert(dblogin);
           //QString str=Usersmap.first();
         // qDebug()<<"while0"<<str;
          // str=Usersmap.second();
           //qDebug()<<"while0"<<str;
            //               i.Usersmap.second.insert(dbpass);
            //i.hasNext();
            //i.Usersmap.next();
qDebug("while1");
            // Usersmap.next();// not worked why?

                  }

//        for (auto & i : Usersmap) {

//qDebug()<< "key "<<Usersmap.key(i);
//QString keyf=Usersmap.key(i);
//qDebug()<<"value"<<Usersmap.value(keyf);
//        }

        query->clear();
        qDebug()<<db.lastError().text();
        query->exec("SELECT * FROM Messages");

        if (query->isActive())
        {
while(query->next())
{messages++;}
        }
        else
        {messages=0;}
        //users=query->record().count();
        ui->lcdNumber_2->display(messages);
   }

    else{qDebug("not open DB");}


} //mainw

MainWindow::~MainWindow()
{
    db.close();
    delete ui;

}
bool MainWindow::logininapp(const QString _login, const QString _pass, QSqlDatabase db, QSqlRecord _rec) // loggin in admin
{
    qDebug()<<"logininapp ";

   //if (db.open())
//    {

//        QSqlQuery *query = new QSqlQuery(db);
//        query->exec();
//        query->exec("SELECT Pass, Login FROM Users1");
//        qDebug()<<db.lastError().text();
//        QSqlRecord rec = query->record();
//        qDebug()<<"loginin _rec"<<_rec;
//        qDebug()<<"loginin rec"<<_rec;
//        //QSqlRecord rec=_rec;
//        while (query->next())
//        {
//            qDebug()<<"logininapp 3";
//            QString dbpass=query->value(rec.indexOf("Pass")).toString();
//            QString dblogin=query->value(rec.indexOf("Login")).toString();
//            //QString login2=query->value(0).toString();
//            //logok=true;
//            if (_login.toStdString()==dblogin.toStdString() && _pass.toStdString()==dbpass.toStdString())
//            {
//                qDebug()<<"true ";
//                qDebug()<<"login "<< dblogin;
//                qDebug()<<"pass "<< dbpass;
//                return true;
//            }

//        }
//        qDebug()<<"false ";
//        return false;
//    }
}
void MainWindow::on_buttonBox_accepted()  // logining
{
    //int blocking=1;
    //QSqlQuery *query = new QSqlQuery(db);
    login=ui->lineEdit->text();
    pass=ui->lineEdit_2->text();
    if(db.open())
    {
        qDebug("open sek");

        qDebug()<<db.lastError().text();


        // QSqlQuery *query = new QSqlQuery(db);
        // query->exec("SELECT Pass, Login FROM Users1");
        // QSqlRecord rec = query->record();
        //qDebug()<<"loginin 0 rec"<<rec;
        QString _login;
        QString _pass;
            // if (logininapp(login, pass, db, rec))
        for (auto & i : Usersmap) {
_login=Usersmap.key(i);
_pass=Usersmap.value(Usersmap.key(i));

            // }
            qDebug()<<"login"<<login;
            qDebug()<<"_login"<<_login;
            qDebug()<<"pass"<<pass;
            qDebug()<<"_pass"<<_pass;
            //if (login=="login" && pass=="pass")
            if (login==_login && pass==_pass)
            {
                logok=true;
                //qDebug()<<"logok click = "<< logok;
            }
        }
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        if (logok)   {
            QMessageBox::information(this, "yes", "Sacsess!");
            ui->pushButton->setChecked(true);
            ui->pushButton->setEnabled(false);
            ui->stackedWidget->setCurrentIndex(1);
            emit accepted();
        }
        else {QMessageBox::warning(this, "Not", "Not acsess");}
    }
    else qDebug("not open db");

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
    ui->lineEdit_2->setFocus();

}

void MainWindow::on_lineEdit_2_editingFinished()
{
    pass=ui->lineEdit_2->text();
    ui->buttonBox->setFocus();

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
    QMessageBox::information(this, "", "Have not help yet");
}

void MainWindow::on_pushButton_clicked(bool checked) //admin mode
{

    if (checked){ui->pushButton->setChecked(true);}
    //ui->pushButton->setProperty(QtColor:green);
    ui->pushButton->setEnabled(false);
    ui->actionadmin_mode->setEnabled(false);
    ui->frame_login_adm->setVisible(true);
    ui->stackedWidget->setCurrentIndex(2);
}




void MainWindow::on_buttonBox_rejected()
{
    //emit rejected();
    MainWindow::on_pBlogout_clicked();
}


void MainWindow::on_stackedWidget_currentChanged(int arg1)
{
    qDebug()<<"Current page "<<ui->stackedWidget->currentIndex();
    qDebug()<<"Current page "<<arg1;
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
        // set ban default else ui->bantime->selectedItems();}
        //QString str=ui->bantime->currentItem()->text();
        //ban=str.toInt();

        //QString mytext=QString("You Set ban to time %1").arg(ui->bantimeitem);
        //QString bantext=QString ("is banned ")+ "ban " + QString::number(ban);
        //QString bantext=QString ("is banned ")+ "ban " + str;
    }
    else {
        QMessageBox::information(this, "Yes" , "bantext");}


    //ui->listWidget->currentItem()->setStyleSheet("background-color:ligthblue;");
    //ui->tabViewusers->CurrentChanged->setBackground(Qt::cyan);
    ui->check_user_ban->setChecked(false);


    //}
}

void MainWindow::on_checkBox_block_clicked() // bloking
{
    if (ui->checkBox_block->isChecked()){

        QString blocktext=QString ("is blocked ");
        QMessageBox::information(this, "Yes" , blocktext);
            //if current block is set  blocking 9999
        //ui->tabViewusers->CurrentIndex()->setBackground(Qt::darkYellow);
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
    if (logok){ ui->stackedWidget->setCurrentIndex(3);
   // displayusers();}

    }
    else {QMessageBox::warning(this, "" ,"Need to login" );}
}


void MainWindow::on_pushButton_3_clicked()
{
    if (logok){ ui->stackedWidget->setCurrentIndex(4);
   // displaymessages();
    }
    else {QMessageBox::warning(this, "" ,"Need to login" );}
}


void MainWindow::on_pBadduser_clicked()
{
    model1->insertRow(model1->rowCount());
    row++;
}


void MainWindow::on_pBsubmit_clicked()
{
    model1->submitAll();
   //displayusers();
}
void MainWindow::displayusers()
{
    if(db.open()){
        query->clear();
        query->exec("SELECT * FROM Users1");

        if (query->isActive())
        {
            while(query->next())
            {users++;}
        }
        else {users=0;}
        // qDebug()<<"db open display number2";
        //users=query->record().count();
        ui->lcdNumber->display(users);
    }
    else qDebug()<<"db not open";
}
void MainWindow::displaymessages()
{
    if(db.open()){
    query->prepare("SELECT * FROM Messages");
    query->exec();
    messages=query->size();
    //users=query->record().count();
    ui->lcdNumber_2->display(messages);}
    else qDebug()<<"db not open";
}
void MainWindow::on_pBdeleteuser_clicked()
{
    model1->removeRow(row);
   // displayusers();
}


void MainWindow::on_tabViewusers_clicked(const QModelIndex &index)
{
    row=index.row();
}


void MainWindow::on_tableViewmessages_clicked(const QModelIndex &index)
{
    model2->submitAll();
  //  displaymessages();
}


void MainWindow::on_pBnext_clicked()
{
    model2->submitAll();
   // displaymessages();
    ui->tabmessage->setCurrentIndex(1);
}


void MainWindow::on_pBback_clicked()
{
    ui->tabmessage->setCurrentIndex(0);
}

void MainWindow::on_pBadd_clicked()
{
    model2->insertRow(model2->rowCount());
    row++;
}


void MainWindow::on_pBdel_clicked()
{
    model2->removeRow(row);
   // displaymessages();
}


void MainWindow::on_pBsub_clicked()
{
    model2->submitAll();
   // displaymessages();
}

