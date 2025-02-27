/********************************************************************************
** Form generated from reading UI file 'groupbox2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBOX2_H
#define UI_GROUPBOX2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GroupBox2
{
public:
    QGridLayout *gridLayout;
    QLabel *name;
    QLabel *mcap;
    QPushButton *pushButton_16;
    QPushButton *pushButton_2;
    QPushButton *pushButton_17;
    QPushButton *pushButton_15;
    QLabel *cap;
    QLabel *mtime;
    QPushButton *pushButton_18;
    QLabel *need;

    void setupUi(QGroupBox *GroupBox2)
    {
        if (GroupBox2->objectName().isEmpty())
            GroupBox2->setObjectName("GroupBox2");
        GroupBox2->resize(207, 270);
        GroupBox2->setMinimumSize(QSize(207, 270));
        GroupBox2->setMaximumSize(QSize(207, 270));
        GroupBox2->setStyleSheet(QString::fromUtf8("background-color: white\n"
"; border-radius: 20px;font: bold 14px;"));
        gridLayout = new QGridLayout(GroupBox2);
        gridLayout->setObjectName("gridLayout");
        name = new QLabel(GroupBox2);
        name->setObjectName("name");
        name->setMinimumSize(QSize(160, 0));
        name->setStyleSheet(QString::fromUtf8("font-size: 18px;"));

        gridLayout->addWidget(name, 0, 0, 1, 1);

        mcap = new QLabel(GroupBox2);
        mcap->setObjectName("mcap");
        mcap->setStyleSheet(QString::fromUtf8("border: 2px solid white;  \n"
"border-radius: 10px; \n"
"background-color: white;\n"
"color: black; \n"
"font: bold 14px;  \n"
"padding: 2px; "));

        gridLayout->addWidget(mcap, 4, 1, 1, 1);

        pushButton_16 = new QPushButton(GroupBox2);
        pushButton_16->setObjectName("pushButton_16");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setMinimumSize(QSize(60, 20));
        pushButton_16->setMaximumSize(QSize(60, 20));
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color: #FFC300; border-radius: 10px; font: bold 14px;"));

        gridLayout->addWidget(pushButton_16, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(GroupBox2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_2->setMaximumSize(QSize(100, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        pushButton_17 = new QPushButton(GroupBox2);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setMinimumSize(QSize(60, 20));
        pushButton_17->setMaximumSize(QSize(60, 20));
        pushButton_17->setStyleSheet(QString::fromUtf8("background-color: #FFC300; border-radius: 10px; font: bold 14px;"));

        gridLayout->addWidget(pushButton_17, 4, 0, 1, 1);

        pushButton_15 = new QPushButton(GroupBox2);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(60, 20));
        pushButton_15->setMaximumSize(QSize(60, 20));
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: #FFC300; border-radius: 10px; font: bold 14px;"));

        gridLayout->addWidget(pushButton_15, 2, 0, 1, 1);

        cap = new QLabel(GroupBox2);
        cap->setObjectName("cap");
        cap->setStyleSheet(QString::fromUtf8("border: 2px solid white;  \n"
"border-radius: 10px; \n"
"background-color: white;\n"
"color: black; \n"
"font: bold 14px;  \n"
"padding: 2px;  "));

        gridLayout->addWidget(cap, 2, 1, 1, 1);

        mtime = new QLabel(GroupBox2);
        mtime->setObjectName("mtime");
        mtime->setStyleSheet(QString::fromUtf8("border: 2px solid white; \n"
"border-radius: 10px; \n"
"background-color: white; \n"
"color: black;  \n"
"font: bold 14px;  \n"
"padding: 2px; "));

        gridLayout->addWidget(mtime, 3, 1, 1, 1);

        pushButton_18 = new QPushButton(GroupBox2);
        pushButton_18->setObjectName("pushButton_18");
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setMinimumSize(QSize(60, 20));
        pushButton_18->setMaximumSize(QSize(60, 20));
        pushButton_18->setStyleSheet(QString::fromUtf8("background-color: #FFC300; border-radius: 10px; font: bold 14px;"));

        gridLayout->addWidget(pushButton_18, 5, 0, 1, 1);

        need = new QLabel(GroupBox2);
        need->setObjectName("need");
        need->setStyleSheet(QString::fromUtf8("border: 2px solid white;  \n"
"border-radius: 10px;  \n"
"background-color: white; \n"
"color: black; \n"
"font: bold 14px; \n"
"padding: 2px;  "));

        gridLayout->addWidget(need, 5, 1, 1, 1);

        name->raise();
        pushButton_16->raise();
        pushButton_15->raise();
        cap->raise();
        mtime->raise();
        pushButton_2->raise();
        mcap->raise();
        pushButton_17->raise();
        pushButton_18->raise();
        need->raise();

        retranslateUi(GroupBox2);

        QMetaObject::connectSlotsByName(GroupBox2);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBox2)
    {
        GroupBox2->setWindowTitle(QCoreApplication::translate("GroupBox2", "GroupBox", nullptr));
        name->setText(QCoreApplication::translate("GroupBox2", "TextLabel", nullptr));
        mcap->setText(QCoreApplication::translate("GroupBox2", "TextLabel", nullptr));
        pushButton_16->setText(QCoreApplication::translate("GroupBox2", "\345\210\266\344\275\234\346\227\266\351\225\277", nullptr));
        pushButton_2->setText(QString());
        pushButton_17->setText(QCoreApplication::translate("GroupBox2", "\346\234\200\345\244\247\345\256\271\351\207\217", nullptr));
        pushButton_15->setText(QCoreApplication::translate("GroupBox2", "\347\216\260\346\234\211\345\256\271\351\207\217", nullptr));
        cap->setText(QCoreApplication::translate("GroupBox2", "TextLabel", nullptr));
        mtime->setText(QCoreApplication::translate("GroupBox2", "TextLabel", nullptr));
        pushButton_18->setText(QCoreApplication::translate("GroupBox2", "\350\256\242\345\215\225\351\234\200\346\261\202", nullptr));
        need->setText(QCoreApplication::translate("GroupBox2", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupBox2: public Ui_GroupBox2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBOX2_H
