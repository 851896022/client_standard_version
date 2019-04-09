/********************************************************************************
** Form generated from reading UI file 'chmodule.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHMODULE_H
#define UI_CHMODULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChModule
{
public:
    QAction *startListen;
    QAction *startRepair;
    QAction *addListenList;
    QVBoxLayout *verticalLayout;
    QLabel *chName;
    QLabel *state;
    QProgressBar *progressBar;

    void setupUi(QFrame *ChModule)
    {
        if (ChModule->objectName().isEmpty())
            ChModule->setObjectName(QStringLiteral("ChModule"));
        ChModule->resize(89, 331);
        QFont font;
        font.setPointSize(14);
        ChModule->setFont(font);
        ChModule->setContextMenuPolicy(Qt::CustomContextMenu);
        ChModule->setStyleSheet(QLatin1String("#ChModule\n"
"{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(162, 162, 162, 179), stop:1 rgba(153, 153, 153, 255));\n"
"	border-radius: 5px;\n"
"\n"
"\n"
"}\n"
""));
        startListen = new QAction(ChModule);
        startListen->setObjectName(QStringLiteral("startListen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/CyclePlayAudio.png"), QSize(), QIcon::Normal, QIcon::Off);
        startListen->setIcon(icon);
        startRepair = new QAction(ChModule);
        startRepair->setObjectName(QStringLiteral("startRepair"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/Refresh34.png"), QSize(), QIcon::Normal, QIcon::Off);
        startRepair->setIcon(icon1);
        addListenList = new QAction(ChModule);
        addListenList->setObjectName(QStringLiteral("addListenList"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/List34.png"), QSize(), QIcon::Normal, QIcon::Off);
        addListenList->setIcon(icon2);
        verticalLayout = new QVBoxLayout(ChModule);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        chName = new QLabel(ChModule);
        chName->setObjectName(QStringLiteral("chName"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        chName->setFont(font1);
        chName->setContextMenuPolicy(Qt::DefaultContextMenu);
        chName->setStyleSheet(QLatin1String("border: 1px solid #FFFFFF; \n"
"border-radius: 5px;\n"
""));
        chName->setAlignment(Qt::AlignCenter);
        chName->setWordWrap(true);

        verticalLayout->addWidget(chName);

        state = new QLabel(ChModule);
        state->setObjectName(QStringLiteral("state"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        state->setFont(font2);
        state->setStyleSheet(QStringLiteral(""));
        state->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(state);

        progressBar = new QProgressBar(ChModule);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setMinimumSize(QSize(20, 0));
        progressBar->setStyleSheet(QLatin1String("QProgressBar\n"
" {  \n"
" border: 2px solid grey;  \n"
" border-radius: 5px;   \n"
"background-color: #FFFFFF;\n"
"}\n"
"QProgressBar::chunk \n"
"{   \n"
" \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.00568182 rgba(0, 157, 68, 255), stop:1 rgba(134, 255, 141, 255));\n"
"\n"
"}\n"
"QProgressBar \n"
"{   \n"
"border: 2px solid grey;   \n"
"border-radius: 5px;   \n"
"text-align: center;\n"
"}"));
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(progressBar);


        retranslateUi(ChModule);

        QMetaObject::connectSlotsByName(ChModule);
    } // setupUi

    void retranslateUi(QFrame *ChModule)
    {
        ChModule->setWindowTitle(QApplication::translate("ChModule", "Frame", nullptr));
        startListen->setText(QApplication::translate("ChModule", "\347\233\221\345\220\254", nullptr));
#ifndef QT_NO_TOOLTIP
        startListen->setToolTip(QApplication::translate("ChModule", "\345\274\200\345\247\213/\345\201\234\346\255\242\345\215\225\350\267\257\347\233\221\345\220\254", nullptr));
#endif // QT_NO_TOOLTIP
        startRepair->setText(QApplication::translate("ChModule", "\346\243\200\344\277\256", nullptr));
        addListenList->setText(QApplication::translate("ChModule", "\346\267\273\345\212\240/\345\210\240\351\231\244", nullptr));
#ifndef QT_NO_TOOLTIP
        addListenList->setToolTip(QApplication::translate("ChModule", "\344\273\216\347\233\221\345\220\254\345\210\227\350\241\250\346\267\273\345\212\240/\345\210\240\351\231\244", nullptr));
#endif // QT_NO_TOOLTIP
        chName->setText(QApplication::translate("ChModule", "A01\344\270\273\347\224\250\345\215\253\346\230\237\346\216\245\346\224\266\346\234\272", nullptr));
        state->setText(QApplication::translate("ChModule", "8888%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChModule: public Ui_ChModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHMODULE_H
