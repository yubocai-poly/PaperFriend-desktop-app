/********************************************************************************
** Form generated from reading UI file 'all_activities.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_ACTIVITIES_H
#define UI_ALL_ACTIVITIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_all_activities
{
public:
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *add_activity_button;
    QGridLayout *activities_cell_layout;
    QSpacerItem *verticalSpacer;
    QPushButton *save_activity_button;

    void setupUi(QDialog *all_activities)
    {
        if (all_activities->objectName().isEmpty())
            all_activities->setObjectName("all_activities");
        all_activities->resize(500, 400);
        horizontalLayout_2 = new QHBoxLayout(all_activities);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        scrollArea = new QScrollArea(all_activities);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 474, 374));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        add_activity_button = new QPushButton(scrollAreaWidgetContents);
        add_activity_button->setObjectName("add_activity_button");

        verticalLayout_3->addWidget(add_activity_button);

        activities_cell_layout = new QGridLayout();
        activities_cell_layout->setObjectName("activities_cell_layout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        activities_cell_layout->addItem(verticalSpacer, 0, 0, 1, 1);


        verticalLayout_3->addLayout(activities_cell_layout);

        save_activity_button = new QPushButton(scrollAreaWidgetContents);
        save_activity_button->setObjectName("save_activity_button");

        verticalLayout_3->addWidget(save_activity_button);


        horizontalLayout->addLayout(verticalLayout_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);


        retranslateUi(all_activities);

        QMetaObject::connectSlotsByName(all_activities);
    } // setupUi

    void retranslateUi(QDialog *all_activities)
    {
        all_activities->setWindowTitle(QCoreApplication::translate("all_activities", "All Activities", nullptr));
        add_activity_button->setText(QCoreApplication::translate("all_activities", "Add Activity", nullptr));
        save_activity_button->setText(QCoreApplication::translate("all_activities", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class all_activities: public Ui_all_activities {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_ACTIVITIES_H
