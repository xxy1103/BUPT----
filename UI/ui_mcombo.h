/********************************************************************************
** Form generated from reading UI file 'mcombo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MCOMBO_H
#define UI_MCOMBO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mcombo
{
public:
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QGroupBox *mcombo)
    {
        if (mcombo->objectName().isEmpty())
            mcombo->setObjectName("mcombo");
        mcombo->resize(250, 300);
        mcombo->setMinimumSize(QSize(250, 300));
        mcombo->setMaximumSize(QSize(250, 300));
        mcombo->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 20px;font: bold 14px;font-size: 18px;"));
        label = new QLabel(mcombo);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 9, 181, 18));
        scrollArea = new QScrollArea(mcombo);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(9, 33, 240, 261));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(240, 150));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 240, 261));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(mcombo);

        QMetaObject::connectSlotsByName(mcombo);
    } // setupUi

    void retranslateUi(QGroupBox *mcombo)
    {
        mcombo->setWindowTitle(QCoreApplication::translate("mcombo", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("mcombo", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mcombo: public Ui_mcombo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MCOMBO_H
