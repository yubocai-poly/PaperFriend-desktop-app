/********************************************************************************
** Form generated from reading UI file 'people_cell.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLE_CELL_H
#define UI_PEOPLE_CELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_people_cell
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *person_name;
    QComboBox *person_type;
    QPushButton *delete_person_button;

    void setupUi(QWidget *people_cell)
    {
        if (people_cell->objectName().isEmpty())
            people_cell->setObjectName("people_cell");
        people_cell->resize(490, 62);
        horizontalLayout_2 = new QHBoxLayout(people_cell);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        person_name = new QLineEdit(people_cell);
        person_name->setObjectName("person_name");

        horizontalLayout->addWidget(person_name);

        person_type = new QComboBox(people_cell);
        person_type->setObjectName("person_type");

        horizontalLayout->addWidget(person_type);

        delete_person_button = new QPushButton(people_cell);
        delete_person_button->setObjectName("delete_person_button");

        horizontalLayout->addWidget(delete_person_button);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(people_cell);

        QMetaObject::connectSlotsByName(people_cell);
    } // setupUi

    void retranslateUi(QWidget *people_cell)
    {
        people_cell->setWindowTitle(QCoreApplication::translate("people_cell", "Form", nullptr));
        delete_person_button->setText(QCoreApplication::translate("people_cell", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class people_cell: public Ui_people_cell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_CELL_H
