/********************************************************************************
** Form generated from reading UI file 'usermanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEMENT_H
#define UI_USERMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserManagement
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtUser;
    QLabel *labState;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtPsw1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txtPsw2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBoxType;
    QLabel *labInfo;
    QPushButton *btnSave;

    void setupUi(QFrame *UserManagement)
    {
        if (UserManagement->objectName().isEmpty())
            UserManagement->setObjectName(QStringLiteral("UserManagement"));
        UserManagement->resize(366, 159);
        verticalLayout_2 = new QVBoxLayout(UserManagement);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(UserManagement);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(69, 16777215));

        horizontalLayout->addWidget(label);

        txtUser = new QLineEdit(UserManagement);
        txtUser->setObjectName(QStringLiteral("txtUser"));

        horizontalLayout->addWidget(txtUser);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        horizontalLayout_6->addLayout(horizontalLayout);

        labState = new QLabel(UserManagement);
        labState->setObjectName(QStringLiteral("labState"));
        labState->setMinimumSize(QSize(100, 0));
        labState->setMaximumSize(QSize(100, 16777215));
        labState->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labState);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(UserManagement);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_2->addWidget(label_2);

        txtPsw1 = new QLineEdit(UserManagement);
        txtPsw1->setObjectName(QStringLiteral("txtPsw1"));

        horizontalLayout_2->addWidget(txtPsw1);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(UserManagement);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_3->addWidget(label_3);

        txtPsw2 = new QLineEdit(UserManagement);
        txtPsw2->setObjectName(QStringLiteral("txtPsw2"));

        horizontalLayout_3->addWidget(txtPsw2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(UserManagement);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_4->addWidget(label_4);

        comboBoxType = new QComboBox(UserManagement);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));

        horizontalLayout_4->addWidget(comboBoxType);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);

        labInfo = new QLabel(UserManagement);
        labInfo->setObjectName(QStringLiteral("labInfo"));
        labInfo->setMinimumSize(QSize(100, 0));
        labInfo->setMaximumSize(QSize(100, 16777215));
        labInfo->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labInfo);


        verticalLayout_2->addLayout(horizontalLayout_5);

        btnSave = new QPushButton(UserManagement);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setEnabled(false);

        verticalLayout_2->addWidget(btnSave);


        retranslateUi(UserManagement);

        QMetaObject::connectSlotsByName(UserManagement);
    } // setupUi

    void retranslateUi(QFrame *UserManagement)
    {
        UserManagement->setWindowTitle(QApplication::translate("UserManagement", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        label->setText(QApplication::translate("UserManagement", "\347\224\250  \346\210\267  \345\220\215", nullptr));
        txtUser->setText(QString());
        labState->setText(QString());
        label_2->setText(QApplication::translate("UserManagement", "\345\257\206      \347\240\201", nullptr));
        label_3->setText(QApplication::translate("UserManagement", "\345\206\215\350\276\223\345\205\245\344\270\200\346\254\241", nullptr));
        label_4->setText(QApplication::translate("UserManagement", "\347\272\247      \345\210\253", nullptr));
        comboBoxType->setItemText(0, QApplication::translate("UserManagement", "\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230", nullptr));
        comboBoxType->setItemText(1, QApplication::translate("UserManagement", "\351\253\230\347\272\247\347\224\250\346\210\267", nullptr));
        comboBoxType->setItemText(2, QApplication::translate("UserManagement", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));

        labInfo->setText(QString());
        btnSave->setText(QApplication::translate("UserManagement", "\344\277\256\346\224\271/\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserManagement: public Ui_UserManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEMENT_H
