/********************************************************************************
** Form generated from reading UI file 'text_analysis_window.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_ANALYSIS_WINDOW_H
#define UI_TEXT_ANALYSIS_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_text_analysis_window
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *apply_mood;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *text_analysis_window)
    {
        if (text_analysis_window->objectName().isEmpty())
            text_analysis_window->setObjectName("text_analysis_window");
        text_analysis_window->resize(362, 398);
        centralwidget = new QWidget(text_analysis_window);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 60, 301, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        apply_mood = new QPushButton(centralwidget);
        apply_mood->setObjectName("apply_mood");
        apply_mood->setGeometry(QRect(30, 250, 301, 41));
        text_analysis_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(text_analysis_window);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 362, 25));
        text_analysis_window->setMenuBar(menubar);
        statusbar = new QStatusBar(text_analysis_window);
        statusbar->setObjectName("statusbar");
        text_analysis_window->setStatusBar(statusbar);

        retranslateUi(text_analysis_window);

        QMetaObject::connectSlotsByName(text_analysis_window);
    } // setupUi

    void retranslateUi(QMainWindow *text_analysis_window)
    {
        text_analysis_window->setWindowTitle(QCoreApplication::translate("text_analysis_window", "MainWindow", nullptr));
        apply_mood->setText(QCoreApplication::translate("text_analysis_window", "Use this data to record mood", nullptr));
    } // retranslateUi

};

namespace Ui {
    class text_analysis_window: public Ui_text_analysis_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_ANALYSIS_WINDOW_H
