/********************************************************************************
** Form generated from reading UI file 'MEAL.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEAL_H
#define UI_MEAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupBox_meal
{
public:
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_15;

    void setupUi(QGroupBox *GroupBox_meal)
    {
        if (GroupBox_meal->objectName().isEmpty())
            GroupBox_meal->setObjectName("GroupBox_meal");
        GroupBox_meal->resize(260, 300);
        GroupBox_meal->setMinimumSize(QSize(260, 300));
        GroupBox_meal->setMaximumSize(QSize(250, 300));
        GroupBox_meal->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 20px;font: bold 14px;"));
        label = new QLabel(GroupBox_meal);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 9, 231, 18));
        label->setStyleSheet(QString::fromUtf8("font-size: 18px;"));
        scrollArea = new QScrollArea(GroupBox_meal);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(8, 33, 260, 191));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(250, 150));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
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
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 260, 191));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_15 = new QPushButton(GroupBox_meal);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(60, 230, 130, 60));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setMinimumSize(QSize(130, 60));
        pushButton_15->setMaximumSize(QSize(130, 60));
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: #FFC300; border-radius: 30px; font: bold 14px;"));

        retranslateUi(GroupBox_meal);

        QMetaObject::connectSlotsByName(GroupBox_meal);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBox_meal)
    {
        GroupBox_meal->setWindowTitle(QCoreApplication::translate("GroupBox_meal", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("GroupBox_meal", "TextLabel", nullptr));
        pushButton_15->setText(QCoreApplication::translate("GroupBox_meal", "\347\253\213\345\215\263\344\270\213\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupBox_meal: public Ui_GroupBox_meal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEAL_H
