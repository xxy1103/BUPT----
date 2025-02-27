/********************************************************************************
** Form generated from reading UI file 'content.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENT_H
#define UI_CONTENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GroupBox_c
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QGroupBox *GroupBox_c)
    {
        if (GroupBox_c->objectName().isEmpty())
            GroupBox_c->setObjectName("GroupBox_c");
        GroupBox_c->setEnabled(true);
        GroupBox_c->resize(220, 50);
        GroupBox_c->setMinimumSize(QSize(220, 50));
        GroupBox_c->setMaximumSize(QSize(220, 50));
        GroupBox_c->setStyleSheet(QString::fromUtf8("background-color: white;font: bold 14px;"));
        horizontalLayout = new QHBoxLayout(GroupBox_c);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(GroupBox_c);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(false);
        pushButton->setMinimumSize(QSize(50, 50));
        pushButton->setMaximumSize(QSize(50, 50));
        pushButton->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(GroupBox_c);
        label->setObjectName("label");
        label->setMinimumSize(QSize(170, 0));
        label->setMaximumSize(QSize(170, 16777215));
        label->setStyleSheet(QString::fromUtf8("qproperty-alignment: 'AlignCenter';font-size: 13px;"));
        label->setIndent(0);

        horizontalLayout->addWidget(label);


        retranslateUi(GroupBox_c);

        QMetaObject::connectSlotsByName(GroupBox_c);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBox_c)
    {
        GroupBox_c->setWindowTitle(QCoreApplication::translate("GroupBox_c", "GroupBox", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GroupBox_c: public Ui_GroupBox_c {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENT_H
