/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionadmin_mode;
    QAction *actioncheck_messages;
    QAction *actionexit;
    QAction *actionhelp;
    QAction *actionset_ban;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_login_adm;
    QLabel *label_7;
    QPushButton *pBlogout;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *page_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QWidget *page_2;
    QListWidget *listWidget;
    QLabel *label_6;
    QListWidget *bantime;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QCheckBox *check_user_ban;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QCheckBox *checkBox_block;
    QWidget *page_4;
    QTabWidget *tabmessage;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menumain;
    QMenu *menuabout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(756, 452);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #81a9ff; \n"
""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        actionadmin_mode = new QAction(MainWindow);
        actionadmin_mode->setObjectName("actionadmin_mode");
        actioncheck_messages = new QAction(MainWindow);
        actioncheck_messages->setObjectName("actioncheck_messages");
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName("actionexit");
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName("actionhelp");
        actionset_ban = new QAction(MainWindow);
        actionset_ban->setObjectName("actionset_ban");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 20, 121, 31));
        pushButton->setFocusPolicy(Qt::ClickFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resorse/C:/Users/alexey/Downloads/feather/chrome.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/resorse/C:/Users/alexey/Downloads/feather/bell.svg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setCheckable(true);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(20, 20, 64, 23));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(100, 20, 64, 23));
        lcdNumber_2->setStyleSheet(QString::fromUtf8("font-color #ff5500"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 70, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 50, 81, 23));
        frame_login_adm = new QFrame(centralwidget);
        frame_login_adm->setObjectName("frame_login_adm");
        frame_login_adm->setEnabled(true);
        frame_login_adm->setGeometry(QRect(590, -20, 151, 141));
        frame_login_adm->setMouseTracking(false);
        frame_login_adm->setFocusPolicy(Qt::ClickFocus);
        frame_login_adm->setLayoutDirection(Qt::LeftToRight);
        frame_login_adm->setAutoFillBackground(false);
        frame_login_adm->setStyleSheet(QString::fromUtf8("\n"
"background-color: #81a9ff; "));
        frame_login_adm->setFrameShape(QFrame::NoFrame);
        frame_login_adm->setFrameShadow(QFrame::Raised);
        frame_login_adm->setLineWidth(0);
        label_7 = new QLabel(frame_login_adm);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 10, 91, 81));
        label_7->setAutoFillBackground(false);
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/icons/icon/caffeine_logo_icon_256818.png")));
        pBlogout = new QPushButton(frame_login_adm);
        pBlogout->setObjectName("pBlogout");
        pBlogout->setGeometry(QRect(10, 100, 95, 31));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(70, 110, 501, 291));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 60, 171, 31));
        pushButton_3 = new QPushButton(page_5);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 100, 171, 31));
        stackedWidget->addWidget(page_5);
        page = new QWidget();
        page->setObjectName("page");
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 10, 251, 151));
        groupBox->setCheckable(false);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 30, 113, 30));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(80, 70, 113, 30));
        lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(19, 30, 51, 23));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(19, 70, 51, 23));
        buttonBox = new QDialogButtonBox(groupBox);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(40, 110, 166, 31));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        listWidget = new QListWidget(page_2);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setText(QString::fromUtf8("user3"));
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(25, 70, 261, 91));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 30, 70, 23));
        bantime = new QListWidget(page_2);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(bantime);
        __qlistwidgetitem1->setText(QString::fromUtf8("1"));
        new QListWidgetItem(bantime);
        new QListWidgetItem(bantime);
        new QListWidgetItem(bantime);
        bantime->setObjectName("bantime");
        bantime->setGeometry(QRect(400, 80, 71, 31));
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(310, 70, 81, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        check_user_ban = new QCheckBox(layoutWidget);
        check_user_ban->setObjectName("check_user_ban");
        check_user_ban->setStyleSheet(QString::fromUtf8("background-color:  #81a9ff"));

        horizontalLayout_2->addWidget(check_user_ban);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        checkBox_block = new QCheckBox(layoutWidget);
        checkBox_block->setObjectName("checkBox_block");

        horizontalLayout->addWidget(checkBox_block);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        tabmessage = new QTabWidget(page_4);
        tabmessage->setObjectName("tabmessage");
        tabmessage->setGeometry(QRect(20, 20, 451, 261));
        tabmessage->setStyleSheet(QString::fromUtf8("background:#ffffff;"));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabmessage->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabmessage->addTab(tab_2, QString());
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 756, 28));
        menumain = new QMenu(menubar);
        menumain->setObjectName("menumain");
        menuabout = new QMenu(menubar);
        menuabout->setObjectName("menuabout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menumain->menuAction());
        menubar->addAction(menuabout->menuAction());
        menumain->addAction(actionadmin_mode);
        menumain->addAction(actioncheck_messages);
        menumain->addAction(actionset_ban);
        menumain->addAction(actionexit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabmessage->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionadmin_mode->setText(QCoreApplication::translate("MainWindow", "admin mode", nullptr));
        actioncheck_messages->setText(QCoreApplication::translate("MainWindow", "check messages", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        actionhelp->setText(QCoreApplication::translate("MainWindow", "help", nullptr));
        actionset_ban->setText(QCoreApplication::translate("MainWindow", "set ban", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Admin mode", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "messages", nullptr));
        label_7->setText(QString());
        pBlogout->setText(QCoreApplication::translate("MainWindow", "logout", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Set blocking", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "View messages", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "login admin", nullptr));
        lineEdit_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "pass", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "user1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "user2", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_6->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));

        const bool __sortingEnabled1 = bantime->isSortingEnabled();
        bantime->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem2 = bantime->item(1);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = bantime->item(2);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = bantime->item(3);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "60", nullptr));
        bantime->setSortingEnabled(__sortingEnabled1);

        label_8->setText(QCoreApplication::translate("MainWindow", "ban", nullptr));
        check_user_ban->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        checkBox_block->setText(QString());
        tabmessage->setTabText(tabmessage->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabmessage->setTabText(tabmessage->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        menumain->setTitle(QCoreApplication::translate("MainWindow", "main", nullptr));
        menuabout->setTitle(QCoreApplication::translate("MainWindow", "about", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
