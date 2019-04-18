/********************************************************************************
** Form generated from reading UI file 'gpstime.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPSTIME_H
#define UI_GPSTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GpsTime
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *title;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *time;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *lcdNumber;

    void setupUi(QFrame *GpsTime)
    {
        if (GpsTime->objectName().isEmpty())
            GpsTime->setObjectName(QStringLiteral("GpsTime"));
        GpsTime->resize(202, 105);
        GpsTime->setMaximumSize(QSize(16777215, 200));
        GpsTime->setStyleSheet(QLatin1String("#GpsTime\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(209, 209, 209, 179), stop:1 rgba(198, 198, 198, 255));\n"
"	border: 3px solid #FFFFFF; \n"
"	border-radius: 3px;\n"
"\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(GpsTime);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        title = new QWidget(GpsTime);
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

        time = new QWidget(GpsTime);
        time->setObjectName(QStringLiteral("time"));
        time->setStyleSheet(QStringLiteral("border-image: url(:/image/LogIntxt.png);"));
        horizontalLayout_2 = new QHBoxLayout(time);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(time);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(15);
        lcdNumber->setFont(font1);
        lcdNumber->setStyleSheet(QStringLiteral(""));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(19);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(6.66667e+8));
        lcdNumber->setProperty("intValue", QVariant(666666666));

        horizontalLayout_2->addWidget(lcdNumber);


        verticalLayout->addWidget(time);


        retranslateUi(GpsTime);

        QMetaObject::connectSlotsByName(GpsTime);
    } // setupUi

    void retranslateUi(QFrame *GpsTime)
    {
        GpsTime->setWindowTitle(QApplication::translate("GpsTime", "Frame", nullptr));
        label->setText(QApplication::translate("GpsTime", "\347\263\273\347\273\237\346\227\266\351\222\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GpsTime: public Ui_GpsTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPSTIME_H
