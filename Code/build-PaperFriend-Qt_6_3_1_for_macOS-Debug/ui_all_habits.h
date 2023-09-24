/********************************************************************************
** Form generated from reading UI file 'all_habits.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_HABITS_H
#define UI_ALL_HABITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_All_Habits
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *add_habit_button;
    QScrollArea *scroll_area;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *habits_cell_layout;
    QPushButton *save_habit_button;
    QTextEdit *all_habits_label;

    void setupUi(QDialog *All_Habits)
    {
        if (All_Habits->objectName().isEmpty())
            All_Habits->setObjectName("All_Habits");
        All_Habits->resize(617, 534);
        verticalLayout = new QVBoxLayout(All_Habits);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        add_habit_button = new QPushButton(All_Habits);
        add_habit_button->setObjectName("add_habit_button");

        verticalLayout_3->addWidget(add_habit_button);

        scroll_area = new QScrollArea(All_Habits);
        scroll_area->setObjectName("scroll_area");
        scroll_area->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 589, 168));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        habits_cell_layout = new QVBoxLayout();
        habits_cell_layout->setObjectName("habits_cell_layout");
        habits_cell_layout->setSizeConstraint(QLayout::SetNoConstraint);

        horizontalLayout->addLayout(habits_cell_layout);

        scroll_area->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scroll_area);

        save_habit_button = new QPushButton(All_Habits);
        save_habit_button->setObjectName("save_habit_button");

        verticalLayout_3->addWidget(save_habit_button);


        verticalLayout->addLayout(verticalLayout_3);

        all_habits_label = new QTextEdit(All_Habits);
        all_habits_label->setObjectName("all_habits_label");
        all_habits_label->setEnabled(true);
        all_habits_label->setAcceptDrops(false);
        all_habits_label->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 239, 239);"));
        all_habits_label->setFrameShape(QFrame::NoFrame);
        all_habits_label->setFrameShadow(QFrame::Plain);
        all_habits_label->setLineWidth(0);
        all_habits_label->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        all_habits_label->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        all_habits_label->setUndoRedoEnabled(false);
        all_habits_label->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(all_habits_label);


        retranslateUi(All_Habits);

        QMetaObject::connectSlotsByName(All_Habits);
    } // setupUi

    void retranslateUi(QDialog *All_Habits)
    {
        All_Habits->setWindowTitle(QCoreApplication::translate("All_Habits", "All habits", nullptr));
        add_habit_button->setText(QCoreApplication::translate("All_Habits", "Add Habit", nullptr));
        save_habit_button->setText(QCoreApplication::translate("All_Habits", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class All_Habits: public Ui_All_Habits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_HABITS_H
