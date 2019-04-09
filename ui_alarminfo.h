/********************************************************************************
** Form generated from reading UI file 'alarminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMINFO_H
#define UI_ALARMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlarmInfo
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *title;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnReach;
    QPushButton *btnReset;
    QPushButton *btnSet;
    QPushButton *btnSetting;
    QWidget *info;
    QVBoxLayout *verticalLayout_3;
    QListWidget *alarmListWidget;

    void setupUi(QFrame *AlarmInfo)
    {
        if (AlarmInfo->objectName().isEmpty())
            AlarmInfo->setObjectName(QStringLiteral("AlarmInfo"));
        AlarmInfo->resize(186, 186);
        AlarmInfo->setStyleSheet(QLatin1String("#AlarmInfo\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(209, 209, 209, 179), stop:1 rgba(198, 198, 198, 255));\n"
"	border: 3px solid #FFFFFF; \n"
"	border-radius: 3px;\n"
"\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(AlarmInfo);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        title = new QWidget(AlarmInfo);
        title->setObjectName(QStringLiteral("title"));
        title->setMinimumSize(QSize(0, 40));
        title->setMaximumSize(QSize(16777215, 40));
        title->setStyleSheet(QLatin1String("#title\n"
"{\n"
"	\n"
"	border-image: url(:/image/LeftTitle.png);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(title);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(40, 5, 5, 5);
        label = new QLabel(title);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(title);

        menu = new QWidget(AlarmInfo);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setMinimumSize(QSize(0, 48));
        menu->setMaximumSize(QSize(16777215, 48));
        menu->setStyleSheet(QLatin1String("#menu\n"
"{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(190, 226, 254, 196), stop:1 rgba(161, 193, 218, 211));\n"
"}"));
        horizontalLayout = new QHBoxLayout(menu);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        btnReach = new QPushButton(menu);
        btnReach->setObjectName(QStringLiteral("btnReach"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnReach->sizePolicy().hasHeightForWidth());
        btnReach->setSizePolicy(sizePolicy);
        btnReach->setStyleSheet(QStringLiteral(""));
        btnReach->setIconSize(QSize(37, 37));

        horizontalLayout->addWidget(btnReach);

        btnReset = new QPushButton(menu);
        btnReset->setObjectName(QStringLiteral("btnReset"));
        sizePolicy.setHeightForWidth(btnReset->sizePolicy().hasHeightForWidth());
        btnReset->setSizePolicy(sizePolicy);
        btnReset->setStyleSheet(QStringLiteral(""));
        btnReset->setIconSize(QSize(37, 37));

        horizontalLayout->addWidget(btnReset);

        btnSet = new QPushButton(menu);
        btnSet->setObjectName(QStringLiteral("btnSet"));
        sizePolicy.setHeightForWidth(btnSet->sizePolicy().hasHeightForWidth());
        btnSet->setSizePolicy(sizePolicy);
        btnSet->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(btnSet);

        btnSetting = new QPushButton(menu);
        btnSetting->setObjectName(QStringLiteral("btnSetting"));
        sizePolicy.setHeightForWidth(btnSetting->sizePolicy().hasHeightForWidth());
        btnSetting->setSizePolicy(sizePolicy);
        btnSetting->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout->addWidget(btnSetting);


        verticalLayout->addWidget(menu);

        info = new QWidget(AlarmInfo);
        info->setObjectName(QStringLiteral("info"));
        info->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(info);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        alarmListWidget = new QListWidget(info);
        alarmListWidget->setObjectName(QStringLiteral("alarmListWidget"));
        alarmListWidget->setStyleSheet(QStringLiteral("\\n{\\n	border: 2px solid #aaaaaa;\\n	border-radius: 5px;\\n	\\n}"));

        verticalLayout_3->addWidget(alarmListWidget);


        verticalLayout->addWidget(info);


        retranslateUi(AlarmInfo);

        QMetaObject::connectSlotsByName(AlarmInfo);
    } // setupUi

    void retranslateUi(QFrame *AlarmInfo)
    {
        AlarmInfo->setWindowTitle(QApplication::translate("AlarmInfo", "Frame", nullptr));
        label->setText(QApplication::translate("AlarmInfo", "\346\212\245\350\255\246\344\277\241\346\201\257", nullptr));
        btnReach->setText(QApplication::translate("AlarmInfo", "\346\237\245\350\257\242", nullptr));
        btnReset->setText(QApplication::translate("AlarmInfo", "\345\244\215\344\275\215", nullptr));
        btnSet->setText(QApplication::translate("AlarmInfo", "\350\256\276\347\275\256", nullptr));
        btnSetting->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AlarmInfo: public Ui_AlarmInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMINFO_H
