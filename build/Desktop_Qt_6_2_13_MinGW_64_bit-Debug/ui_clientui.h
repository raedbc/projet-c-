/********************************************************************************
** Form generated from reading UI file 'clientui.ui'
**
** Created by: Qt User Interface Compiler version 6.2.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTUI_H
#define UI_CLIENTUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientUI
{
public:
    QWidget *icon_name_widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_21;
    QPushButton *pushButton_18;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QWidget *widget_3;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *header_widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_15;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_16;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_add;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *prenom;
    QLabel *label_6;
    QLineEdit *nom;
    QLabel *label_7;
    QLineEdit *sexe;
    QLabel *label_8;
    QDateEdit *DateN;
    QLabel *label_9;
    QLineEdit *nationalite;
    QLabel *label_10;
    QLineEdit *email;
    QPushButton *pushButton_20;
    QPushButton *pushButton_22;
    QTableView *tableView;
    QLabel *label_5;
    QPushButton *pushButton_edit;
    QLineEdit *del_line;
    QPushButton *pushButton_del;
    QLabel *label_11;
    QLineEdit *id;
    QWidget *page_4;
    QWidget *icon_only_widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_7;

    void setupUi(QDialog *ClientUI)
    {
        if (ClientUI->objectName().isEmpty())
            ClientUI->setObjectName(QString::fromUtf8("ClientUI"));
        ClientUI->resize(891, 463);
        icon_name_widget = new QWidget(ClientUI);
        icon_name_widget->setObjectName(QString::fromUtf8("icon_name_widget"));
        icon_name_widget->setGeometry(QRect(69, 0, 161, 461));
        icon_name_widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(8, 8, 8);\n"
"}\n"
"QPushButton{\n"
"color:White;\n"
"text-align:left;\n"
"height:30px;\n"
"border:none;\n"
"border-top-left-radius:10px;\n"
"border-bottom-left-radius:10px;\n"
"}\n"
"QPushButton:checked{\n"
"background-color:#F5FAFE;\n"
"color:#1F95EF;\n"
"font-weight:bold;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(icon_name_widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(icon_name_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(8, 8, 8, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        label_2->setPalette(palette);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        pushButton_21 = new QPushButton(icon_name_widget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sylfaen")});
        pushButton_21->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Users/anas/Downloads/Luxury Hotel (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_21->setIcon(icon);
        pushButton_21->setIconSize(QSize(50, 50));

        verticalLayout_2->addWidget(pushButton_21);

        pushButton_18 = new QPushButton(icon_name_widget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../ressources qt/profile_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon1);

        verticalLayout_2->addWidget(pushButton_18);

        pushButton_8 = new QPushButton(icon_name_widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../ressources qt/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon2);
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(icon_name_widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../ressources qt/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon3);
        pushButton_9->setCheckable(true);
        pushButton_9->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(icon_name_widget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setFont(font1);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../ressources qt/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon4);
        pushButton_10->setCheckable(true);
        pushButton_10->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(icon_name_widget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setFont(font1);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../ressources qt/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon5);
        pushButton_11->setCheckable(true);
        pushButton_11->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(icon_name_widget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setFont(font1);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../ressources qt/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon6);
        pushButton_12->setCheckable(true);
        pushButton_12->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(icon_name_widget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setFont(font1);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../ressources qt/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon7);
        pushButton_13->setCheckable(true);
        pushButton_13->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(icon_name_widget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setFont(font1);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../ressources qt/log_out_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon8);

        verticalLayout_2->addWidget(pushButton_14);


        verticalLayout_4->addLayout(verticalLayout_2);

        widget_3 = new QWidget(ClientUI);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(229, -10, 661, 471));
        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 661, 471));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        header_widget = new QWidget(page_3);
        header_widget->setObjectName(QString::fromUtf8("header_widget"));
        header_widget->setGeometry(QRect(190, 20, 381, 51));
        horizontalLayout_2 = new QHBoxLayout(header_widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_15 = new QPushButton(header_widget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#D4AF37;\n"
"    color: white;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../../ressources qt/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon9);
        pushButton_15->setIconSize(QSize(14, 14));
        pushButton_15->setCheckable(true);
        pushButton_15->setAutoExclusive(true);

        horizontalLayout_2->addWidget(pushButton_15);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(header_widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_16 = new QPushButton(header_widget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#D4AF37;\n"
"    color: white;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../../ressources qt/search (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon10);

        horizontalLayout->addWidget(pushButton_16);


        horizontalLayout_2->addLayout(horizontalLayout);

        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 141, 16));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgb(0, 0, 0); /* Rose p\303\242le */\n"
"    color: #D4AF37;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 61, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sylfaen")});
        font2.setBold(false);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgb(0, 0, 0); /* Rose p\303\242le */\n"
"    color: #D4AF37;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));
        pushButton_add = new QPushButton(page_3);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(190, 410, 111, 31));
        pushButton_add->setFont(font1);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: #D4AF37;\n"
"color:white;\n"
"border:none;\n"
" border: 2px solid black;\n"
" border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../../ressources qt/add student.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon11);
        comboBox = new QComboBox(page_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 80, 81, 22));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
" border: 2px solid black;\n"
"    border-radius: 5px;\n"
"  background-color: #D4AF37;\n"
"}"));
        layoutWidget = new QWidget(page_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 150, 161, 299));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        prenom = new QLineEdit(layoutWidget);
        prenom->setObjectName(QString::fromUtf8("prenom"));
        prenom->setBaseSize(QSize(2, 2));
        prenom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    color: darkblue;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));

        verticalLayout_5->addWidget(prenom);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sylfaen")});
        font3.setPointSize(12);
        label_6->setFont(font3);

        verticalLayout_5->addWidget(label_6);

        nom = new QLineEdit(layoutWidget);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setBaseSize(QSize(2, 2));
        nom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    color: darkblue;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));

        verticalLayout_5->addWidget(nom);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        verticalLayout_5->addWidget(label_7);

        sexe = new QLineEdit(layoutWidget);
        sexe->setObjectName(QString::fromUtf8("sexe"));
        sexe->setBaseSize(QSize(2, 2));
        sexe->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    color: darkblue;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));

        verticalLayout_5->addWidget(sexe);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);

        verticalLayout_5->addWidget(label_8);

        DateN = new QDateEdit(layoutWidget);
        DateN->setObjectName(QString::fromUtf8("DateN"));
        DateN->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #F5F5F5;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"\n"
"}"));

        verticalLayout_5->addWidget(DateN);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);

        verticalLayout_5->addWidget(label_9);

        nationalite = new QLineEdit(layoutWidget);
        nationalite->setObjectName(QString::fromUtf8("nationalite"));
        nationalite->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    color: darkblue;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));

        verticalLayout_5->addWidget(nationalite);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);

        verticalLayout_5->addWidget(label_10);

        email = new QLineEdit(layoutWidget);
        email->setObjectName(QString::fromUtf8("email"));
        email->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    color: darkblue;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));

        verticalLayout_5->addWidget(email);

        pushButton_20 = new QPushButton(page_3);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(360, 80, 80, 22));
        pushButton_20->setFont(font1);
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#D4AF37;\n"
"    color: black;\n"
" border: 2px solid black;\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../../ressources qt/financessmall2 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_20->setIcon(icon12);
        pushButton_22 = new QPushButton(page_3);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(460, 80, 80, 21));
        pushButton_22->setFont(font1);
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:red;\n"
"    color: black;\n"
" border: 2px solid black;\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("../../ressources qt/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_22->setIcon(icon13);
        tableView = new QTableView(page_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(190, 130, 451, 221));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 120, 71, 22));
        label_5->setFont(font3);
        pushButton_edit = new QPushButton(page_3);
        pushButton_edit->setObjectName(QString::fromUtf8("pushButton_edit"));
        pushButton_edit->setGeometry(QRect(190, 370, 111, 31));
        pushButton_edit->setFont(font1);
        pushButton_edit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: #D4AF37;\n"
"color:white;\n"
"border:none;\n"
" border: 2px solid black;\n"
" border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        pushButton_edit->setIcon(icon11);
        del_line = new QLineEdit(page_3);
        del_line->setObjectName(QString::fromUtf8("del_line"));
        del_line->setGeometry(QRect(470, 360, 81, 31));
        del_line->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    color: darkblue;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));
        pushButton_del = new QPushButton(page_3);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(560, 360, 81, 31));
        pushButton_del->setFont(font1);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: #D4AF37;\n"
"color:white;\n"
"border:none;\n"
" border: 2px solid black;\n"
" border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"   border-radius:5px;\n"
"  color:#D4AF37;\n"
"}\n"
"\n"
""));
        pushButton_del->setIcon(icon11);
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 60, 71, 22));
        label_11->setFont(font3);
        id = new QLineEdit(page_3);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(10, 90, 159, 22));
        id->setBaseSize(QSize(2, 2));
        id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    color: darkblue;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"}"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);
        icon_only_widget = new QWidget(ClientUI);
        icon_only_widget->setObjectName(QString::fromUtf8("icon_only_widget"));
        icon_only_widget->setGeometry(QRect(-1, -1, 71, 461));
        icon_only_widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(6, 6, 6);\n"
"}\n"
"QPushButton{\n"
"color:White;\n"
"height:30px;\n"
"border:none;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(icon_only_widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(icon_only_widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_5 = new QPushButton(icon_only_widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setIcon(icon2);
        pushButton_5->setCheckable(true);
        pushButton_5->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(icon_only_widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setIcon(icon3);
        pushButton_3->setCheckable(true);
        pushButton_3->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(icon_only_widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setIcon(icon4);
        pushButton_2->setCheckable(true);
        pushButton_2->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_2);

        pushButton_6 = new QPushButton(icon_only_widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("../../ressources qt/4a43e044-dcb6-4328-8af8-282b5427ebd6 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon14);
        pushButton_6->setCheckable(true);
        pushButton_6->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(icon_only_widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setIcon(icon6);
        pushButton_4->setCheckable(true);
        pushButton_4->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(icon_only_widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIcon(icon7);
        pushButton->setCheckable(true);
        pushButton->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton);

        pushButton_7 = new QPushButton(icon_only_widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("../../Users/anas/ressources qt/log_out_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon15);

        verticalLayout->addWidget(pushButton_7);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(ClientUI);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClientUI);
    } // setupUi

    void retranslateUi(QDialog *ClientUI)
    {
        ClientUI->setWindowTitle(QCoreApplication::translate("ClientUI", "Dialog", nullptr));
        label_2->setText(QString());
        pushButton_21->setText(QCoreApplication::translate("ClientUI", "HOTEL 360", nullptr));
        pushButton_18->setText(QCoreApplication::translate("ClientUI", "RAED BC", nullptr));
        pushButton_8->setText(QCoreApplication::translate("ClientUI", "gestion des  employ\303\251s", nullptr));
        pushButton_9->setText(QCoreApplication::translate("ClientUI", "gestion des clients", nullptr));
        pushButton_10->setText(QCoreApplication::translate("ClientUI", "gestion des chambres", nullptr));
        pushButton_11->setText(QCoreApplication::translate("ClientUI", "gestion des stocks", nullptr));
        pushButton_12->setText(QCoreApplication::translate("ClientUI", "gestion du restaurant", nullptr));
        pushButton_13->setText(QCoreApplication::translate("ClientUI", "gestion  reservations", nullptr));
        pushButton_14->setText(QCoreApplication::translate("ClientUI", "Deconnecter", nullptr));
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        label_4->setText(QCoreApplication::translate("ClientUI", "BIENVENUE DANS VOTRE CRM", nullptr));
        label_3->setText(QCoreApplication::translate("ClientUI", "SALUT RAED", nullptr));
        pushButton_add->setText(QCoreApplication::translate("ClientUI", "AJOUTER", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ClientUI", "trier selon", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ClientUI", "nom", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ClientUI", "nationalite", nullptr));

        label_6->setText(QCoreApplication::translate("ClientUI", "NOM:", nullptr));
        label_7->setText(QCoreApplication::translate("ClientUI", "SEXE", nullptr));
        label_8->setText(QCoreApplication::translate("ClientUI", "DATE DE NAISSANCE", nullptr));
        label_9->setText(QCoreApplication::translate("ClientUI", "NATIONALITE:", nullptr));
        label_10->setText(QCoreApplication::translate("ClientUI", "ADRESSE E-MAIL:", nullptr));
        pushButton_20->setText(QCoreApplication::translate("ClientUI", "statistique", nullptr));
        pushButton_22->setText(QCoreApplication::translate("ClientUI", "PDF", nullptr));
        label_5->setText(QCoreApplication::translate("ClientUI", "PRENOM:", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("ClientUI", "Editer", nullptr));
        pushButton_del->setText(QCoreApplication::translate("ClientUI", "Suppreimer", nullptr));
        label_11->setText(QCoreApplication::translate("ClientUI", "ID:", nullptr));
        label->setText(QCoreApplication::translate("ClientUI", "TextLabel", nullptr));
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        pushButton_6->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClientUI: public Ui_ClientUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTUI_H
