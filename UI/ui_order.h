/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLabel *label_1;
    QLabel *sts_t;
    QLabel *label;
    QLabel *time;
    QLabel *label_2;
    QSpinBox *speed;
    QPushButton *back;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QScrollArea *FOOD;
    QWidget *FOOD_1;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *input;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *MEAL;
    QWidget *MEAL_1;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *output;
    QVBoxLayout *verticalLayout_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *orderWindow)
    {
        if (orderWindow->objectName().isEmpty())
            orderWindow->setObjectName("orderWindow");
        orderWindow->resize(1344, 847);
        orderWindow->setMinimumSize(QSize(0, 0));
        orderWindow->setMaximumSize(QSize(16777215, 16777215));
        orderWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
        centralwidget = new QWidget(orderWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setMinimumSize(QSize(700, 101));
        groupBox_5->setMaximumSize(QSize(311, 101));
        groupBox_5->setStyleSheet(QString::fromUtf8("background:transparent;border:0px;"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(groupBox_5);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton->setMaximumSize(QSize(100, 100));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/img/logo.png)"));

        horizontalLayout_3->addWidget(pushButton);

        label_1 = new QLabel(groupBox_5);
        label_1->setObjectName("label_1");
        label_1->setMinimumSize(QSize(81, 81));
        label_1->setMaximumSize(QSize(81, 81));
        label_1->setStyleSheet(QString::fromUtf8(" border-radius: 30px; font: bold 17px;color: rgb(255, 185, 0);"));

        horizontalLayout_3->addWidget(label_1);

        sts_t = new QLabel(groupBox_5);
        sts_t->setObjectName("sts_t");
        sts_t->setMinimumSize(QSize(81, 81));
        sts_t->setMaximumSize(QSize(91, 91));
        sts_t->setStyleSheet(QString::fromUtf8(" border-radius: 30px; font: bold 17px;color: rgb(255, 185, 0);"));

        horizontalLayout_3->addWidget(sts_t);

        label = new QLabel(groupBox_5);
        label->setObjectName("label");
        label->setMinimumSize(QSize(81, 81));
        label->setStyleSheet(QString::fromUtf8(" border-radius: 30px; font: bold 17px;color: rgb(255, 185, 0);"));

        horizontalLayout_3->addWidget(label);

        time = new QLabel(groupBox_5);
        time->setObjectName("time");
        time->setStyleSheet(QString::fromUtf8(" border-radius: 30px; font: bold 17px;color: rgb(255, 185, 0);"));

        horizontalLayout_3->addWidget(time);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8(" border-radius: 30px; font: bold 17px;color: rgb(255, 185, 0);"));

        horizontalLayout_3->addWidget(label_2);

        speed = new QSpinBox(groupBox_5);
        speed->setObjectName("speed");
        speed->setMinimumSize(QSize(0, 83));
        speed->setStyleSheet(QString::fromUtf8(" border-radius: 30px; font: bold 17px;color: rgb(255, 185, 0);"));
        speed->setMinimum(1);
        speed->setMaximum(1000);

        horizontalLayout_3->addWidget(speed);


        gridLayout->addWidget(groupBox_5, 0, 0, 1, 1);

        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
        back->setMinimumSize(QSize(130, 60));
        back->setMaximumSize(QSize(130, 60));
        back->setStyleSheet(QString::fromUtf8("background-color: #FFC300; border-radius: 30px; font: bold 14px;"));

        gridLayout->addWidget(back, 0, 1, 1, 1);

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
        FOOD_1->setGeometry(QRect(0, 0, 1070, 323));
        FOOD_1->setStyleSheet(QString::fromUtf8("background:transparent;border:0px"));
        horizontalLayout = new QHBoxLayout(FOOD_1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FOOD->setWidget(FOOD_1);

        verticalLayout->addWidget(FOOD);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMinimumSize(QSize(250, 323));
        groupBox_3->setMaximumSize(QSize(250, 16777215));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: #FFC300;border:0px;font: bold 14px;border-radius: 50px"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        scrollArea = new QScrollArea(groupBox_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(225, 290));
        scrollArea->setMaximumSize(QSize(220, 16777215));
        scrollArea->setStyleSheet(QString::fromUtf8("background:transparent"));
        scrollArea->setWidgetResizable(true);
        input = new QWidget();
        input->setObjectName("input");
        input->setGeometry(QRect(0, 0, 225, 305));
        input->setStyleSheet(QString::fromUtf8("background:transparent"));
        verticalLayout_3 = new QVBoxLayout(input);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea->setWidget(input);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 1, 1, 1);

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
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MEAL->sizePolicy().hasHeightForWidth());
        MEAL->setSizePolicy(sizePolicy1);
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
        MEAL_1->setGeometry(QRect(0, 0, 1070, 340));
        MEAL_1->setStyleSheet(QString::fromUtf8("background:transparent;border:0px"));
        horizontalLayout_2 = new QHBoxLayout(MEAL_1);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        MEAL->setWidget(MEAL_1);

        verticalLayout_2->addWidget(MEAL);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setMaximumSize(QSize(250, 16777215));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: #FFC300;border:0px;font: bold 14px;border-radius: 50px"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName("gridLayout_3");
        scrollArea_2 = new QScrollArea(groupBox_4);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setMinimumSize(QSize(225, 290));
        scrollArea_2->setMaximumSize(QSize(225, 16777215));
        scrollArea_2->setStyleSheet(QString::fromUtf8("background:transparent"));
        scrollArea_2->setWidgetResizable(true);
        output = new QWidget();
        output->setObjectName("output");
        output->setGeometry(QRect(0, 0, 225, 322));
        output->setStyleSheet(QString::fromUtf8("background:transparent"));
        verticalLayout_4 = new QVBoxLayout(output);
        verticalLayout_4->setObjectName("verticalLayout_4");
        scrollArea_2->setWidget(output);

        gridLayout_3->addWidget(scrollArea_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_4, 2, 1, 1, 1);

        orderWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(orderWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1344, 33));
        orderWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(orderWindow);
        statusbar->setObjectName("statusbar");
        orderWindow->setStatusBar(statusbar);

        retranslateUi(orderWindow);

        QMetaObject::connectSlotsByName(orderWindow);
    } // setupUi

    void retranslateUi(QMainWindow *orderWindow)
    {
        orderWindow->setWindowTitle(QCoreApplication::translate("orderWindow", "MainWindow", nullptr));
        groupBox_5->setTitle(QString());
        pushButton->setText(QString());
        label_1->setText(QCoreApplication::translate("orderWindow", "\347\263\273\347\273\237\347\212\266\346\200\201\357\274\232", nullptr));
        sts_t->setText(QCoreApplication::translate("orderWindow", "\345\274\200\345\220\257", nullptr));
        label->setText(QCoreApplication::translate("orderWindow", "\347\263\273\347\273\237\346\227\266\351\227\264", nullptr));
        time->setText(QCoreApplication::translate("orderWindow", "07:00:00", nullptr));
        label_2->setText(QCoreApplication::translate("orderWindow", "\346\227\266\351\227\264\345\200\215\347\216\207", nullptr));
        back->setText(QCoreApplication::translate("orderWindow", "\350\277\224\345\233\236", nullptr));
        groupBox->setTitle(QCoreApplication::translate("orderWindow", "FOOD", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("orderWindow", "ORDER", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("orderWindow", "MEAL", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("orderWindow", "HISTORY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderWindow: public Ui_orderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
