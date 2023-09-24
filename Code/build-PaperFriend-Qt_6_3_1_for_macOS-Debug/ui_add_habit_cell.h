/********************************************************************************
** Form generated from reading UI file 'add_habit_cell.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_HABIT_CELL_H
#define UI_ADD_HABIT_CELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_habit_cell
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *habit_name;
    QComboBox *habit_frequency;
    QPushButton *delete_habit_button;

    void setupUi(QWidget *add_habit_cell)
    {
        if (add_habit_cell->objectName().isEmpty())
            add_habit_cell->setObjectName("add_habit_cell");
        add_habit_cell->resize(490, 62);
        horizontalLayout_2 = new QHBoxLayout(add_habit_cell);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        habit_name = new QLineEdit(add_habit_cell);
        habit_name->setObjectName("habit_name");

        horizontalLayout->addWidget(habit_name);

        habit_frequency = new QComboBox(add_habit_cell);
        habit_frequency->setObjectName("habit_frequency");

        horizontalLayout->addWidget(habit_frequency);

        delete_habit_button = new QPushButton(add_habit_cell);
        delete_habit_button->setObjectName("delete_habit_button");

        horizontalLayout->addWidget(delete_habit_button);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(add_habit_cell);

        QMetaObject::connectSlotsByName(add_habit_cell);
    } // setupUi

    void retranslateUi(QWidget *add_habit_cell)
    {
        add_habit_cell->setWindowTitle(QCoreApplication::translate("add_habit_cell", "Form", nullptr));
        habit_name->setInputMask(QString());
        habit_name->setText(QString());
        habit_name->setPlaceholderText(QCoreApplication::translate("add_habit_cell", "Enter Habit", nullptr));
        delete_habit_button->setText(QCoreApplication::translate("add_habit_cell", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_habit_cell: public Ui_add_habit_cell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_HABIT_CELL_H
