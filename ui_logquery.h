/********************************************************************************
** Form generated from reading UI file 'logquery.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGQUERY_H
#define UI_LOGQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogQuery
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *dateTimeEditStart;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEditEnd;
    QComboBox *type;
    QPushButton *BtnFind;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QFrame *LogQuery)
    {
        if (LogQuery->objectName().isEmpty())
            LogQuery->setObjectName(QStringLiteral("LogQuery"));
        LogQuery->resize(1057, 673);
        verticalLayout = new QVBoxLayout(LogQuery);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(LogQuery);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        dateTimeEditStart = new QDateTimeEdit(LogQuery);
        dateTimeEditStart->setObjectName(QStringLiteral("dateTimeEditStart"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateTimeEditStart->sizePolicy().hasHeightForWidth());
        dateTimeEditStart->setSizePolicy(sizePolicy);
        dateTimeEditStart->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEditStart);

        label_2 = new QLabel(LogQuery);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        dateTimeEditEnd = new QDateTimeEdit(LogQuery);
        dateTimeEditEnd->setObjectName(QStringLiteral("dateTimeEditEnd"));
        sizePolicy.setHeightForWidth(dateTimeEditEnd->sizePolicy().hasHeightForWidth());
        dateTimeEditEnd->setSizePolicy(sizePolicy);
        dateTimeEditEnd->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEditEnd);

        type = new QComboBox(LogQuery);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QStringLiteral("type"));
        sizePolicy.setHeightForWidth(type->sizePolicy().hasHeightForWidth());
        type->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(type);

        BtnFind = new QPushButton(LogQuery);
        BtnFind->setObjectName(QStringLiteral("BtnFind"));

        horizontalLayout->addWidget(BtnFind);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(LogQuery);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(LogQuery);

        QMetaObject::connectSlotsByName(LogQuery);
    } // setupUi

    void retranslateUi(QFrame *LogQuery)
    {
        LogQuery->setWindowTitle(QApplication::translate("LogQuery", "\346\227\245\345\277\227\346\237\245\350\257\242", nullptr));
        label->setText(QApplication::translate("LogQuery", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        dateTimeEditStart->setDisplayFormat(QApplication::translate("LogQuery", "yyyy-MM-dd hh:mm", nullptr));
        label_2->setText(QApplication::translate("LogQuery", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        dateTimeEditEnd->setDisplayFormat(QApplication::translate("LogQuery", "yyyy-MM-dd hh:mm", nullptr));
        type->setItemText(0, QApplication::translate("LogQuery", "\347\224\250\346\210\267\346\227\245\345\277\227", nullptr));
        type->setItemText(1, QApplication::translate("LogQuery", "\347\247\222\346\225\260\346\215\256", nullptr));
        type->setItemText(2, QApplication::translate("LogQuery", "\346\212\245\350\255\246\346\227\245\345\277\227", nullptr));

        BtnFind->setText(QApplication::translate("LogQuery", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogQuery: public Ui_LogQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGQUERY_H
