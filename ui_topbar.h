/********************************************************************************
** Form generated from reading UI file 'topbar.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPBAR_H
#define UI_TOPBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_TopBar
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *listenInfo;
    QToolButton *fullScreen;
    QLabel *label_3;

    void setupUi(QFrame *TopBar)
    {
        if (TopBar->objectName().isEmpty())
            TopBar->setObjectName(QStringLiteral("TopBar"));
        TopBar->resize(871, 50);
        TopBar->setMinimumSize(QSize(0, 50));
        TopBar->setMaximumSize(QSize(16777215, 50));
        TopBar->setStyleSheet(QLatin1String("#TopBar\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(81, 182, 243, 255), stop:1 rgba(45, 141, 246, 255));\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(TopBar);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(TopBar);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 50));
        label->setMaximumSize(QSize(50, 50));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/Logo.png);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(TopBar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(300, 50));
        label_2->setMaximumSize(QSize(300, 50));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/image/toptitle.png);"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(506, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        listenInfo = new QLabel(TopBar);
        listenInfo->setObjectName(QStringLiteral("listenInfo"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        listenInfo->setFont(font);
        listenInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(listenInfo);

        fullScreen = new QToolButton(TopBar);
        fullScreen->setObjectName(QStringLiteral("fullScreen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/exitFull.png"), QSize(), QIcon::Normal, QIcon::Off);
        fullScreen->setIcon(icon);
        fullScreen->setIconSize(QSize(24, 24));
        fullScreen->setAutoRaise(true);

        horizontalLayout->addWidget(fullScreen);

        label_3 = new QLabel(TopBar);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        retranslateUi(TopBar);

        QMetaObject::connectSlotsByName(TopBar);
    } // setupUi

    void retranslateUi(QFrame *TopBar)
    {
        TopBar->setWindowTitle(QApplication::translate("TopBar", "Frame", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        listenInfo->setText(QString());
        fullScreen->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TopBar: public Ui_TopBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPBAR_H
