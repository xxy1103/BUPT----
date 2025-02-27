/********************************************************************************
** Form generated from reading UI file 'groupbox1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBOX1_H
#define UI_GROUPBOX1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GroupBox1
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton_15;
    QPushButton *pushButton_2;

    void setupUi(QGroupBox *GroupBox1)
    {
        if (GroupBox1->objectName().isEmpty())
            GroupBox1->setObjectName("GroupBox1");
        GroupBox1->resize(210, 250);
        GroupBox1->setMinimumSize(QSize(210, 250));
        GroupBox1->setMaximumSize(QSize(210, 253));
        GroupBox1->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 20px;font: bold 14px;"));
        gridLayout = new QGridLayout(GroupBox1);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(GroupBox1);
        label->setObjectName("label");
        label->setMinimumSize(QSize(190, 0));
        label->setStyleSheet(QString::fromUtf8("font-size: 18px;"));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        pushButton_15 = new QPushButton(GroupBox1);
        pushButton_15->setObjectName("pushButton_15");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(130, 60));
        pushButton_15->setMaximumSize(QSize(16777215, 16777215));
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: #FFC300; border-radius: 30px; font: bold 14px;"));

        gridLayout->addWidget(pushButton_15, 3, 1, 1, 1);

        pushButton_2 = new QPushButton(GroupBox1);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(140, 140));
        pushButton_2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);


        retranslateUi(GroupBox1);

        QMetaObject::connectSlotsByName(GroupBox1);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBox1)
    {
        GroupBox1->setWindowTitle(QCoreApplication::translate("GroupBox1", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("GroupBox1", "name", nullptr));
        pushButton_15->setText(QCoreApplication::translate("GroupBox1", "\347\253\213\345\215\263\344\270\213\345\215\225", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GroupBox1: public Ui_GroupBox1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBOX1_H
