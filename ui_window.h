/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QAction *actFindOld;
    QAction *actSetGate;
    QAction *actQuery;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftWidget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *mainTabWidget;
    QWidget *mainTabWidgetTab_0;
    QMenuBar *menuBar;
    QMenu *menu_1;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QStringLiteral("window"));
        window->resize(1573, 737);
        actFindOld = new QAction(window);
        actFindOld->setObjectName(QStringLiteral("actFindOld"));
        actSetGate = new QAction(window);
        actSetGate->setObjectName(QStringLiteral("actSetGate"));
        actQuery = new QAction(window);
        actQuery->setObjectName(QStringLiteral("actQuery"));
        centralWidget = new QWidget(window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("#centralWidget,#mainTabWidgetTab_0\n"
"{\n"
"background-color: rgb(211, 211, 211);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topWidget = new QWidget(centralWidget);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        topWidget->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(topWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leftWidget = new QWidget(centralWidget);
        leftWidget->setObjectName(QStringLiteral("leftWidget"));
        leftWidget->setMinimumSize(QSize(200, 0));
        leftWidget->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(leftWidget);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mainTabWidget = new QTabWidget(widget_2);
        mainTabWidget->setObjectName(QStringLiteral("mainTabWidget"));
        mainTabWidgetTab_0 = new QWidget();
        mainTabWidgetTab_0->setObjectName(QStringLiteral("mainTabWidgetTab_0"));
        mainTabWidget->addTab(mainTabWidgetTab_0, QString());

        horizontalLayout_2->addWidget(mainTabWidget);


        horizontalLayout->addWidget(widget_2);


        verticalLayout->addLayout(horizontalLayout);

        window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1573, 23));
        menu_1 = new QMenu(menuBar);
        menu_1->setObjectName(QStringLiteral("menu_1"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        window->setMenuBar(menuBar);
        statusBar = new QStatusBar(window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        window->setStatusBar(statusBar);

        menuBar->addAction(menu_1->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu_1->addAction(actSetGate);
        menu_2->addAction(actQuery);

        retranslateUi(window);

        mainTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QMainWindow *window)
    {
        window->setWindowTitle(QApplication::translate("window", "\351\237\263\351\242\221\347\233\221\346\265\213\345\256\242\346\210\267\347\253\257", nullptr));
        actFindOld->setText(QApplication::translate("window", "\346\237\245\350\257\242\345\216\206\345\217\262\351\237\263\351\242\221", nullptr));
#ifndef QT_NO_TOOLTIP
        actFindOld->setToolTip(QApplication::translate("window", "\345\216\206\345\217\262\351\237\263\351\242\221\345\233\236\346\224\276\344\273\245\345\217\212\345\257\274\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        actSetGate->setText(QApplication::translate("window", "\350\256\276\347\275\256\351\227\250\351\231\220", nullptr));
        actQuery->setText(QApplication::translate("window", "\346\227\245\345\277\227\346\237\245\350\257\242", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(mainTabWidgetTab_0), QApplication::translate("window", "\344\270\255\346\216\247\346\234\272\346\210\277", nullptr));
        menu_1->setTitle(QApplication::translate("window", "\347\256\241\347\220\206", nullptr));
        menu_2->setTitle(QApplication::translate("window", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
