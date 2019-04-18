/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtPass;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnCancel;
    QPushButton *btnOk;

    void setupUi(QFrame *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName(QStringLiteral("LogIn"));
        LogIn->resize(330, 115);
        verticalLayout = new QVBoxLayout(LogIn);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(LogIn);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        txtUser = new QLineEdit(LogIn);
        txtUser->setObjectName(QStringLiteral("txtUser"));
        txtUser->setFont(font);
        txtUser->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(txtUser);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(LogIn);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        txtPass = new QLineEdit(LogIn);
        txtPass->setObjectName(QStringLiteral("txtPass"));
        txtPass->setFont(font);
        txtPass->setEchoMode(QLineEdit::Password);
        txtPass->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(txtPass);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnCancel = new QPushButton(LogIn);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setFont(font);

        horizontalLayout_3->addWidget(btnCancel);

        btnOk = new QPushButton(LogIn);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setFont(font);

        horizontalLayout_3->addWidget(btnOk);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(LogIn);
        QObject::connect(txtPass, SIGNAL(returnPressed()), btnOk, SLOT(click()));

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QFrame *LogIn)
    {
        LogIn->setWindowTitle(QApplication::translate("LogIn", "\347\231\273\345\275\225", nullptr));
        label->setText(QApplication::translate("LogIn", "\347\224\250\346\210\267\345\220\215", nullptr));
        txtUser->setText(QString());
        label_2->setText(QApplication::translate("LogIn", "\345\257\206\347\240\201", nullptr));
        btnCancel->setText(QApplication::translate("LogIn", "\345\217\226\346\266\210", nullptr));
        btnOk->setText(QApplication::translate("LogIn", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
