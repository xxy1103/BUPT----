/********************************************************************************
** Form generated from reading UI file 'seller.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLER_H
#define UI_SELLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sellerWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QScrollArea *FOOD;
    QWidget *FOOD_1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *MEAL;
    QWidget *MEAL_1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back;
    QPushButton *menuinput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sellerWindow)
    {
        if (sellerWindow->objectName().isEmpty())
            sellerWindow->setObjectName("sellerWindow");
        sellerWindow->resize(1344, 846);
        sellerWindow->setMinimumSize(QSize(0, 0));
        sellerWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
        centralwidget = new QWidget(sellerWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(220, 323));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("background:transparent;border:0px;font: bold 14px;"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FOOD = new QScrollArea(groupBox);
        FOOD->setObjectName("FOOD");
        FOOD->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"    border: none;\n"
"    background: lightgray;\n"
"    width: 10px;\n"
"    margin: 15px 0 15px 0;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: gray;\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    border: none;\n"
"    background: lightgray;\n"
"    height: 10px;\n"
"    margin: 0 15px 0 15px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: gray;\n"
"    min-width: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    border: none;\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: none;\n"
"    background: none;\n"
"}"));
        FOOD->setWidgetResizable(true);
        FOOD_1 = new QWidget();
        FOOD_1->setObjectName("FOOD_1");
        FOOD_1->setGeometry(QRect(0, 0, 1200, 323));
        FOOD_1->setStyleSheet(QString::fromUtf8("background:transparent;border:0px"));
        horizontalLayout = new QHBoxLayout(FOOD_1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FOOD->setWidget(FOOD_1);

        verticalLayout->addWidget(FOOD);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton->setMaximumSize(QSize(100, 100));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/img/logo.png)"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(220, 340));
        groupBox_2->setStyleSheet(QString::fromUtf8("background:transparent;border:0px;font: bold 14px;"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        MEAL = new QScrollArea(groupBox_2);
        MEAL->setObjectName("MEAL");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MEAL->sizePolicy().hasHeightForWidth());
        MEAL->setSizePolicy(sizePolicy);
        MEAL->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"    border: none;\n"
"    background: lightgray;\n"
"    width: 10px;\n"
"    margin: 15px 0 15px 0;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: gray;\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    border: none;\n"
"    background: lightgray;\n"
"    height: 10px;\n"
"    margin: 0 15px 0 15px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: gray;\n"
"    min-width: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    border: none;\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: none;\n"
"    background: none;\n"
"}"));
        MEAL->setWidgetResizable(true);
        MEAL_1 = new QWidget();
        MEAL_1->setObjectName("MEAL_1");
        MEAL_1->setGeometry(QRect(0, 0, 1200, 340));
        MEAL_1->setStyleSheet(QString::fromUtf8("background:transparent;border:0px"));
        horizontalLayout_2 = new QHBoxLayout(MEAL_1);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        MEAL->setWidget(MEAL_1);

        verticalLayout_2->addWidget(MEAL);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy1);
        back->setMinimumSize(QSize(120, 60));
        back->setMaximumSize(QSize(120, 60));
        back->setStyleSheet(QString::fromUtf8("background-color: #FFC300; border-radius: 30px; font: bold 14px;"));

        gridLayout->addWidget(back, 0, 2, 1, 1);

        menuinput = new QPushButton(centralwidget);
        menuinput->setObjectName("menuinput");
        menuinput->setMinimumSize(QSize(120, 120));
        menuinput->setMaximumSize(QSize(120, 120));
        menuinput->setStyleSheet(QString::fromUtf8("border-image:url(:/img/lyc.png); font: bold 14px;color: white;"));

        gridLayout->addWidget(menuinput, 1, 2, 1, 1);

        sellerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sellerWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1344, 33));
        sellerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(sellerWindow);
        statusbar->setObjectName("statusbar");
        sellerWindow->setStatusBar(statusbar);

        retranslateUi(sellerWindow);

        QMetaObject::connectSlotsByName(sellerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *sellerWindow)
    {
        sellerWindow->setWindowTitle(QCoreApplication::translate("sellerWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("sellerWindow", "FOOD", nullptr));
        pushButton->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("sellerWindow", "MEAL", nullptr));
        back->setText(QCoreApplication::translate("sellerWindow", "\350\277\224\345\233\236", nullptr));
        menuinput->setText(QCoreApplication::translate("sellerWindow", "\350\217\234\345\215\225\350\276\223\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sellerWindow: public Ui_sellerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLER_H
