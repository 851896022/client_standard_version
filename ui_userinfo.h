/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfo
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *title;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *time;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *userName;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLogin;

    void setupUi(QFrame *UserInfo)
    {
        if (UserInfo->objectName().isEmpty())
            UserInfo->setObjectName(QStringLiteral("UserInfo"));
        UserInfo->resize(186, 164);
        UserInfo->setStyleSheet(QLatin1String("#UserInfo\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(209, 209, 209, 179), stop:1 rgba(198, 198, 198, 255));\n"
"	border: 3px solid #FFFFFF; \n"
"	border-radius: 3px;\n"
"\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(UserInfo);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        title = new QWidget(UserInfo);
        title->setObjectName(QStringLiteral("title"));
        title->setMinimumSize(QSize(0, 40));
        title->setMaximumSize(QSize(16777215, 40));
        title->setStyleSheet(QLatin1String("#title\n"
"{\n"
"border-image: url(:/image/LeftTitle.png);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        horizontalLayout = new QHBoxLayout(title);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(40, -1, -1, -1);
        label = new QLabel(title);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font);

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(title);

        time = new QWidget(UserInfo);
        time->setObjectName(QStringLiteral("time"));
        time->setStyleSheet(QStringLiteral("border-image: url(:/image/LogIntxt.png);"));
        horizontalLayout_2 = new QHBoxLayout(time);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        userName = new QLineEdit(time);
        userName->setObjectName(QStringLiteral("userName"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userName->sizePolicy().hasHeightForWidth());
        userName->setSizePolicy(sizePolicy);
        userName->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        userName->setFont(font1);
        userName->setAlignment(Qt::AlignCenter);
        userName->setReadOnly(true);

        horizontalLayout_2->addWidget(userName);


        verticalLayout->addWidget(time);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnLogin = new QPushButton(UserInfo);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setMinimumSize(QSize(100, 50));
        btnLogin->setMaximumSize(QSize(100, 50));
        btnLogin->setFont(font1);
        btnLogin->setStyleSheet(QLatin1String("QPushButton{border-image:url(:/image/button_red.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{border-image: url(:/image/button_red.png);}\n"
"QPushButton:pressed{border-image: url(:/image/button_red_A.png);}"));

        horizontalLayout_3->addWidget(btnLogin);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(UserInfo);

        QMetaObject::connectSlotsByName(UserInfo);
    } // setupUi

    void retranslateUi(QFrame *UserInfo)
    {
        UserInfo->setWindowTitle(QApplication::translate("UserInfo", "Frame", nullptr));
        label->setText(QApplication::translate("UserInfo", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        userName->setText(QApplication::translate("UserInfo", "\346\234\252\347\231\273\345\275\225", nullptr));
        btnLogin->setText(QApplication::translate("UserInfo", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfo: public Ui_UserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
