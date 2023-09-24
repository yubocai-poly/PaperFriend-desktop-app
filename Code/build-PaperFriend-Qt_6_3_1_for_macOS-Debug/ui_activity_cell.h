/********************************************************************************
** Form generated from reading UI file 'activity_cell.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITY_CELL_H
#define UI_ACTIVITY_CELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_activity_cell
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *activity_name;
    QComboBox *activity_type;
    QPushButton *delete_activity_button;

    void setupUi(QWidget *activity_cell)
    {
        if (activity_cell->objectName().isEmpty())
            activity_cell->setObjectName("activity_cell");
        activity_cell->resize(490, 62);
        horizontalLayout_2 = new QHBoxLayout(activity_cell);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        activity_name = new QLineEdit(activity_cell);
        activity_name->setObjectName("activity_name");

        horizontalLayout->addWidget(activity_name);

        activity_type = new QComboBox(activity_cell);
        activity_type->setObjectName("activity_type");

        horizontalLayout->addWidget(activity_type);

        delete_activity_button = new QPushButton(activity_cell);
        delete_activity_button->setObjectName("delete_activity_button");

        horizontalLayout->addWidget(delete_activity_button);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(activity_cell);

        QMetaObject::connectSlotsByName(activity_cell);
    } // setupUi

    void retranslateUi(QWidget *activity_cell)
    {
        activity_cell->setWindowTitle(QCoreApplication::translate("activity_cell", "Form", nullptr));
        delete_activity_button->setText(QCoreApplication::translate("activity_cell", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class activity_cell: public Ui_activity_cell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVITY_CELL_H
