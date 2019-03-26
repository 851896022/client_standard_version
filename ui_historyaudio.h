/********************************************************************************
** Form generated from reading UI file 'historyaudio.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYAUDIO_H
#define UI_HISTORYAUDIO_H

#include <ActiveQt/QAxWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HistoryAudio
{
public:
    QVBoxLayout *verticalLayout;
    QAxWidget *axWidget;

    void setupUi(QFrame *HistoryAudio)
    {
        if (HistoryAudio->objectName().isEmpty())
            HistoryAudio->setObjectName(QStringLiteral("HistoryAudio"));
        HistoryAudio->resize(1196, 553);
        verticalLayout = new QVBoxLayout(HistoryAudio);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        axWidget = new QAxWidget(HistoryAudio);
        axWidget->setObjectName(QStringLiteral("axWidget"));

        verticalLayout->addWidget(axWidget);


        retranslateUi(HistoryAudio);

        QMetaObject::connectSlotsByName(HistoryAudio);
    } // setupUi

    void retranslateUi(QFrame *HistoryAudio)
    {
        HistoryAudio->setWindowTitle(QApplication::translate("HistoryAudio", "Frame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryAudio: public Ui_HistoryAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYAUDIO_H
