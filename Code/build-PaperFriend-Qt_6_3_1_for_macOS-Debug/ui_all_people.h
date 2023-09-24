/********************************************************************************
** Form generated from reading UI file 'all_people.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_PEOPLE_H
#define UI_ALL_PEOPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_all_people
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *add_people_button;
    QGridLayout *people_cell_layout;
    QSpacerItem *verticalSpacer;
    QPushButton *save_people_button;

    void setupUi(QDialog *all_people)
    {
        if (all_people->objectName().isEmpty())
            all_people->setObjectName("all_people");
        all_people->resize(500, 400);
        verticalLayout_2 = new QVBoxLayout(all_people);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        add_people_button = new QPushButton(all_people);
        add_people_button->setObjectName("add_people_button");

        verticalLayout->addWidget(add_people_button);

        people_cell_layout = new QGridLayout();
        people_cell_layout->setObjectName("people_cell_layout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        people_cell_layout->addItem(verticalSpacer, 0, 0, 1, 1);


        verticalLayout->addLayout(people_cell_layout);

        save_people_button = new QPushButton(all_people);
        save_people_button->setObjectName("save_people_button");

        verticalLayout->addWidget(save_people_button);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(all_people);

        QMetaObject::connectSlotsByName(all_people);
    } // setupUi

    void retranslateUi(QDialog *all_people)
    {
        all_people->setWindowTitle(QCoreApplication::translate("all_people", "All People", nullptr));
        add_people_button->setText(QCoreApplication::translate("all_people", "Add a person", nullptr));
        save_people_button->setText(QCoreApplication::translate("all_people", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class all_people: public Ui_all_people {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_PEOPLE_H
