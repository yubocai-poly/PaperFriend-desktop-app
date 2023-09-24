/********************************************************************************
** Form generated from reading UI file 'display_daily_habit.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_DAILY_HABIT_H
#define UI_DISPLAY_DAILY_HABIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Display_Daily_Habit
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *habit_label;
    QPushButton *yes_button;
    QPushButton *no_button;
    QPushButton *delete_button;

    void setupUi(QWidget *Display_Daily_Habit)
    {
        if (Display_Daily_Habit->objectName().isEmpty())
            Display_Daily_Habit->setObjectName("Display_Daily_Habit");
        Display_Daily_Habit->resize(490, 62);
        horizontalLayout_2 = new QHBoxLayout(Display_Daily_Habit);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        habit_label = new QLabel(Display_Daily_Habit);
        habit_label->setObjectName("habit_label");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(habit_label->sizePolicy().hasHeightForWidth());
        habit_label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(habit_label);

        yes_button = new QPushButton(Display_Daily_Habit);
        yes_button->setObjectName("yes_button");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(yes_button->sizePolicy().hasHeightForWidth());
        yes_button->setSizePolicy(sizePolicy1);
        yes_button->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(yes_button);

        no_button = new QPushButton(Display_Daily_Habit);
        no_button->setObjectName("no_button");
        sizePolicy1.setHeightForWidth(no_button->sizePolicy().hasHeightForWidth());
        no_button->setSizePolicy(sizePolicy1);
        no_button->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(no_button);

        delete_button = new QPushButton(Display_Daily_Habit);
        delete_button->setObjectName("delete_button");
        sizePolicy1.setHeightForWidth(delete_button->sizePolicy().hasHeightForWidth());
        delete_button->setSizePolicy(sizePolicy1);
        delete_button->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(delete_button);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Display_Daily_Habit);

        QMetaObject::connectSlotsByName(Display_Daily_Habit);
    } // setupUi

    void retranslateUi(QWidget *Display_Daily_Habit)
    {
        Display_Daily_Habit->setWindowTitle(QCoreApplication::translate("Display_Daily_Habit", "Form", nullptr));
        habit_label->setText(QString());
        yes_button->setText(QCoreApplication::translate("Display_Daily_Habit", "Yes", nullptr));
        no_button->setText(QCoreApplication::translate("Display_Daily_Habit", "No", nullptr));
        delete_button->setText(QCoreApplication::translate("Display_Daily_Habit", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Display_Daily_Habit: public Ui_Display_Daily_Habit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_DAILY_HABIT_H
