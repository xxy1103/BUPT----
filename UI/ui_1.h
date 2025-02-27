/********************************************************************************
** Form generated from reading UI file '1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_1_H
#define UI_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow: public QObject
{
    Q_OBJECT
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *order;
    QGridLayout *gridLayout_3;
    QPushButton *seller;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1344, 756);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        order = new QPushButton(centralwidget);
        order->setObjectName("order");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(order->sizePolicy().hasHeightForWidth());
        order->setSizePolicy(sizePolicy);
        order->setMinimumSize(QSize(300, 400));
        order->setStyleSheet(QString::fromUtf8("border-image: url(:/img/order.png) 0 0 0 0 stretch stretch;\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 50px;"));

        gridLayout_2->addWidget(order, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        seller = new QPushButton(centralwidget);
        seller->setObjectName("seller");
        sizePolicy.setHeightForWidth(seller->sizePolicy().hasHeightForWidth());
        seller->setSizePolicy(sizePolicy);
        seller->setMinimumSize(QSize(300, 400));
        seller->setStyleSheet(QString::fromUtf8("border-image: url(:/img/seller.png) 0 0 0 0 stretch stretch;\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 50px; \n"
""));

        gridLayout_3->addWidget(seller, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1344, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        order->setText(QString());
        seller->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_1_H
