/********************************************************************************
** Form generated from reading UI file 'setgate.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETGATE_H
#define UI_SETGATE_H

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

QT_BEGIN_NAMESPACE

class Ui_setGate
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtAlarmGate;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtAlarmDelay;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txtSImGate;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *txtSImDelay;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;

    void setupUi(QFrame *setGate)
    {
        if (setGate->objectName().isEmpty())
            setGate->setObjectName(QStringLiteral("setGate"));
        setGate->resize(460, 333);
        verticalLayout = new QVBoxLayout(setGate);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(setGate);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        txtAlarmGate = new QLineEdit(setGate);
        txtAlarmGate->setObjectName(QStringLiteral("txtAlarmGate"));
        txtAlarmGate->setFont(font);
        txtAlarmGate->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(txtAlarmGate);

        label_5 = new QLabel(setGate);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(setGate);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        txtAlarmDelay = new QLineEdit(setGate);
        txtAlarmDelay->setObjectName(QStringLiteral("txtAlarmDelay"));
        txtAlarmDelay->setFont(font);
        txtAlarmDelay->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(txtAlarmDelay);

        label_6 = new QLabel(setGate);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_6);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(setGate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        txtSImGate = new QLineEdit(setGate);
        txtSImGate->setObjectName(QStringLiteral("txtSImGate"));
        txtSImGate->setFont(font);
        txtSImGate->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(txtSImGate);

        label_7 = new QLabel(setGate);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_7);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(setGate);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        txtSImDelay = new QLineEdit(setGate);
        txtSImDelay->setObjectName(QStringLiteral("txtSImDelay"));
        txtSImDelay->setFont(font);
        txtSImDelay->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(txtSImDelay);

        label_8 = new QLabel(setGate);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_8);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        btnOk = new QPushButton(setGate);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setFont(font);

        horizontalLayout_5->addWidget(btnOk);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(setGate);

        QMetaObject::connectSlotsByName(setGate);
    } // setupUi

    void retranslateUi(QFrame *setGate)
    {
        setGate->setWindowTitle(QApplication::translate("setGate", "\344\277\256\346\224\271\346\212\245\350\255\246\345\217\202\346\225\260", nullptr));
        label->setText(QApplication::translate("setGate", "\345\271\205\345\272\246\346\212\245\350\255\246\351\227\250\351\231\220", nullptr));
        txtAlarmGate->setText(QApplication::translate("setGate", "\350\257\273\345\217\226\345\244\261\350\264\245", nullptr));
        label_5->setText(QApplication::translate("setGate", "\357\274\2100~10000\357\274\211", nullptr));
        label_2->setText(QApplication::translate("setGate", "\345\271\205\345\272\246\346\212\245\350\255\246\345\273\266\346\227\266", nullptr));
        txtAlarmDelay->setText(QApplication::translate("setGate", "\350\257\273\345\217\226\345\244\261\350\264\245", nullptr));
        label_6->setText(QApplication::translate("setGate", "\357\274\2101~100\357\274\211\347\247\222", nullptr));
        label_3->setText(QApplication::translate("setGate", "\347\233\270\344\274\274\345\272\246\346\212\245\350\255\246\351\227\250\351\231\220", nullptr));
        txtSImGate->setText(QApplication::translate("setGate", "\350\257\273\345\217\226\345\244\261\350\264\245", nullptr));
        label_7->setText(QApplication::translate("setGate", "\357\274\2100~100\357\274\211%", nullptr));
        label_4->setText(QApplication::translate("setGate", "\347\233\270\344\274\274\345\272\246\346\212\245\350\255\246\345\273\266\346\227\266", nullptr));
        txtSImDelay->setText(QApplication::translate("setGate", "\350\257\273\345\217\226\345\244\261\350\264\245", nullptr));
        label_8->setText(QApplication::translate("setGate", "\357\274\2101~100\357\274\211\347\247\222", nullptr));
        btnOk->setText(QApplication::translate("setGate", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setGate: public Ui_setGate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETGATE_H
