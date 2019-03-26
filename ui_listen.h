/********************************************************************************
** Form generated from reading UI file 'listen.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEN_H
#define UI_LISTEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Listen
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *title;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *switchDelay;
    QWidget *menu;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *putUp;
    QPushButton *putDown;
    QPushButton *putDelete;
    QPushButton *startOrStop;
    QWidget *info;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listenListWidget;

    void setupUi(QFrame *Listen)
    {
        if (Listen->objectName().isEmpty())
            Listen->setObjectName(QStringLiteral("Listen"));
        Listen->resize(200, 207);
        Listen->setStyleSheet(QLatin1String("#Listen\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(209, 209, 209, 179), stop:1 rgba(198, 198, 198, 255));\n"
"	border: 3px solid #FFFFFF; \n"
"	border-radius: 3px;\n"
"\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(Listen);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        title = new QWidget(Listen);
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
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(40, 5, 5, 5);
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

        frame = new QFrame(Listen);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        switchDelay = new QLineEdit(frame);
        switchDelay->setObjectName(QStringLiteral("switchDelay"));

        horizontalLayout_3->addWidget(switchDelay);


        verticalLayout->addWidget(frame);

        menu = new QWidget(Listen);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setMinimumSize(QSize(0, 48));
        menu->setMaximumSize(QSize(16777215, 48));
        menu->setStyleSheet(QLatin1String("#menu\n"
"{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(190, 226, 254, 196), stop:1 rgba(161, 193, 218, 211));\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(menu);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        putUp = new QPushButton(menu);
        putUp->setObjectName(QStringLiteral("putUp"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(putUp->sizePolicy().hasHeightForWidth());
        putUp->setSizePolicy(sizePolicy);
        putUp->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(putUp);

        putDown = new QPushButton(menu);
        putDown->setObjectName(QStringLiteral("putDown"));
        sizePolicy.setHeightForWidth(putDown->sizePolicy().hasHeightForWidth());
        putDown->setSizePolicy(sizePolicy);
        putDown->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(putDown);

        putDelete = new QPushButton(menu);
        putDelete->setObjectName(QStringLiteral("putDelete"));
        sizePolicy.setHeightForWidth(putDelete->sizePolicy().hasHeightForWidth());
        putDelete->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(putDelete);

        startOrStop = new QPushButton(menu);
        startOrStop->setObjectName(QStringLiteral("startOrStop"));
        sizePolicy.setHeightForWidth(startOrStop->sizePolicy().hasHeightForWidth());
        startOrStop->setSizePolicy(sizePolicy);
        startOrStop->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/CyclePlayAudio.png"), QSize(), QIcon::Normal, QIcon::Off);
        startOrStop->setIcon(icon);
        startOrStop->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(startOrStop);


        verticalLayout->addWidget(menu);

        info = new QWidget(Listen);
        info->setObjectName(QStringLiteral("info"));
        info->setStyleSheet(QLatin1String("#info\n"
"{\n"
"	border: 2px solid #aaaaaa;\n"
"	border-radius: 5px;\n"
"	\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(info);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        listenListWidget = new QListWidget(info);
        listenListWidget->setObjectName(QStringLiteral("listenListWidget"));

        verticalLayout_3->addWidget(listenListWidget);


        verticalLayout->addWidget(info);


        retranslateUi(Listen);

        QMetaObject::connectSlotsByName(Listen);
    } // setupUi

    void retranslateUi(QFrame *Listen)
    {
        Listen->setWindowTitle(QApplication::translate("Listen", "Frame", nullptr));
        label->setText(QApplication::translate("Listen", "\351\237\263\351\242\221\347\233\221\345\220\254", nullptr));
        label_2->setText(QApplication::translate("Listen", "\345\210\207\346\215\242\345\273\266\346\227\266\357\274\210\347\247\222\357\274\211", nullptr));
        switchDelay->setText(QApplication::translate("Listen", "5", nullptr));
        putUp->setText(QApplication::translate("Listen", "\344\270\212\347\247\273", nullptr));
        putDown->setText(QApplication::translate("Listen", "\344\270\213\347\247\273", nullptr));
        putDelete->setText(QApplication::translate("Listen", "\345\210\240\351\231\244", nullptr));
        startOrStop->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Listen: public Ui_Listen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEN_H
