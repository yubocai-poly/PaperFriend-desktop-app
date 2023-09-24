/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_New;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_Copy;
    QAction *action_Cut;
    QAction *action_Paste;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSave_2;
    QAction *actionSaveAs;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *left_frame;
    QVBoxLayout *verticalLayout_2;
    QWidget *standard_frame;
    QHBoxLayout *standard;
    QToolButton *settingsButton;
    QSpacerItem *horizontalSpacer;
    QWidget *settings_frame;
    QVBoxLayout *settings;
    QLabel *label;
    QCheckBox *Weekly_recaps;
    QCheckBox *Monthly_recaps;
    QCheckBox *Yearly_recaps;
    QPushButton *save_settings;
    QSpacerItem *space;
    QScrollArea *scrollArea;
    QWidget *scrollable_chat_content;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QPushButton *suggestions_button;
    QSpacerItem *verticalSpacer;
    QPushButton *activitie_button;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *main_frame;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QVBoxLayout *filters;
    QHBoxLayout *horizontalLayout;
    QPushButton *newEntryButton;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *type_filter;
    QComboBox *operation_filter;
    QDoubleSpinBox *value_filter;
    QPushButton *filterButton;
    QPushButton *clear_button;
    QHBoxLayout *horizontalLayout_2;
    QLabel *existing_filters;
    QPushButton *Test_entries;
    QScrollArea *EntriesScroll;
    QWidget *scrollAreaWidgetContents;
    QWidget *page_2;
    QVBoxLayout *right_frame;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QVBoxLayout *habits_frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_12;
    QLabel *habit_title_label;
    QSpacerItem *verticalSpacer_2;
    QLabel *generic_habit_label;
    QScrollArea *habits_scrollArea;
    QWidget *scrollAreahabitswidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_daily_habits;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1032, 600);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName("action_Open");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pictures/rsc/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon);
        action_New = new QAction(MainWindow);
        action_New->setObjectName("action_New");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pictures/rsc/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon1);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName("action_Save");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pictures/rsc/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon2);
        action_SaveAs = new QAction(MainWindow);
        action_SaveAs->setObjectName("action_SaveAs");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pictures/rsc/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_SaveAs->setIcon(icon3);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName("action_Copy");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pictures/rsc/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon4);
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName("action_Cut");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pictures/rsc/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon5);
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName("action_Paste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/pictures/rsc/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon6);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionSave_2 = new QAction(MainWindow);
        actionSave_2->setObjectName("actionSave_2");
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_13 = new QHBoxLayout(centralwidget);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        left_frame = new QVBoxLayout();
        left_frame->setSpacing(2);
        left_frame->setObjectName("left_frame");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        standard_frame = new QWidget(centralwidget);
        standard_frame->setObjectName("standard_frame");
        standard = new QHBoxLayout(standard_frame);
        standard->setObjectName("standard");
        settingsButton = new QToolButton(standard_frame);
        settingsButton->setObjectName("settingsButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy);
        settingsButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        settingsButton->setAutoFillBackground(false);
        settingsButton->setPopupMode(QToolButton::InstantPopup);

        standard->addWidget(settingsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        standard->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(standard_frame);

        settings_frame = new QWidget(centralwidget);
        settings_frame->setObjectName("settings_frame");
        settings = new QVBoxLayout(settings_frame);
        settings->setObjectName("settings");
        settings->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(settings_frame);
        label->setObjectName("label");

        settings->addWidget(label);

        Weekly_recaps = new QCheckBox(settings_frame);
        Weekly_recaps->setObjectName("Weekly_recaps");
        Weekly_recaps->setChecked(true);

        settings->addWidget(Weekly_recaps);

        Monthly_recaps = new QCheckBox(settings_frame);
        Monthly_recaps->setObjectName("Monthly_recaps");
        Monthly_recaps->setChecked(true);

        settings->addWidget(Monthly_recaps);

        Yearly_recaps = new QCheckBox(settings_frame);
        Yearly_recaps->setObjectName("Yearly_recaps");
        Yearly_recaps->setChecked(true);

        settings->addWidget(Yearly_recaps);

        save_settings = new QPushButton(settings_frame);
        save_settings->setObjectName("save_settings");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(save_settings->sizePolicy().hasHeightForWidth());
        save_settings->setSizePolicy(sizePolicy1);

        settings->addWidget(save_settings);

        space = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        settings->addItem(space);


        verticalLayout_2->addWidget(settings_frame);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollable_chat_content = new QWidget();
        scrollable_chat_content->setObjectName("scrollable_chat_content");
        scrollable_chat_content->setGeometry(QRect(0, 0, 152, 83));
        verticalLayout_6 = new QVBoxLayout(scrollable_chat_content);
        verticalLayout_6->setObjectName("verticalLayout_6");
        scrollArea->setWidget(scrollable_chat_content);

        verticalLayout_2->addWidget(scrollArea);


        left_frame->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        suggestions_button = new QPushButton(centralwidget);
        suggestions_button->setObjectName("suggestions_button");

        verticalLayout->addWidget(suggestions_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        activitie_button = new QPushButton(centralwidget);
        activitie_button->setObjectName("activitie_button");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(activitie_button->sizePolicy().hasHeightForWidth());
        activitie_button->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(activitie_button);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalLayout->setStretch(3, 2);

        left_frame->addLayout(verticalLayout);

        left_frame->setStretch(0, 6);
        left_frame->setStretch(1, 4);

        horizontalLayout_13->addLayout(left_frame);

        main_frame = new QVBoxLayout();
        main_frame->setSpacing(6);
        main_frame->setObjectName("main_frame");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        filters = new QVBoxLayout();
        filters->setObjectName("filters");
        filters->setContentsMargins(-1, 10, -1, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(11, 10, 11, 3);
        newEntryButton = new QPushButton(page);
        newEntryButton->setObjectName("newEntryButton");
        sizePolicy2.setHeightForWidth(newEntryButton->sizePolicy().hasHeightForWidth());
        newEntryButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(newEntryButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        type_filter = new QComboBox(page);
        type_filter->addItem(QString());
        type_filter->addItem(QString());
        type_filter->addItem(QString());
        type_filter->addItem(QString());
        type_filter->addItem(QString());
        type_filter->addItem(QString());
        type_filter->addItem(QString());
        type_filter->setObjectName("type_filter");

        horizontalLayout->addWidget(type_filter);

        operation_filter = new QComboBox(page);
        operation_filter->addItem(QString());
        operation_filter->addItem(QString());
        operation_filter->addItem(QString());
        operation_filter->setObjectName("operation_filter");
        operation_filter->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(operation_filter);

        value_filter = new QDoubleSpinBox(page);
        value_filter->setObjectName("value_filter");
        value_filter->setMaximumSize(QSize(50, 16777215));
        value_filter->setDecimals(1);
        value_filter->setValue(50.000000000000000);

        horizontalLayout->addWidget(value_filter);

        filterButton = new QPushButton(page);
        filterButton->setObjectName("filterButton");
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(filterButton->sizePolicy().hasHeightForWidth());
        filterButton->setSizePolicy(sizePolicy4);
        filterButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(filterButton);

        clear_button = new QPushButton(page);
        clear_button->setObjectName("clear_button");
        clear_button->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(clear_button);


        filters->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        existing_filters = new QLabel(page);
        existing_filters->setObjectName("existing_filters");
        existing_filters->setIndent(20);

        horizontalLayout_2->addWidget(existing_filters);

        Test_entries = new QPushButton(page);
        Test_entries->setObjectName("Test_entries");
        Test_entries->setMinimumSize(QSize(100, 0));
        Test_entries->setMaximumSize(QSize(100, 29));

        horizontalLayout_2->addWidget(Test_entries);


        filters->addLayout(horizontalLayout_2);


        gridLayout->addLayout(filters, 0, 0, 1, 1);

        EntriesScroll = new QScrollArea(page);
        EntriesScroll->setObjectName("EntriesScroll");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(EntriesScroll->sizePolicy().hasHeightForWidth());
        EntriesScroll->setSizePolicy(sizePolicy5);
        EntriesScroll->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 506, 443));
        EntriesScroll->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(EntriesScroll, 8, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        main_frame->addWidget(stackedWidget);


        horizontalLayout_13->addLayout(main_frame);

        right_frame = new QVBoxLayout();
        right_frame->setSpacing(2);
        right_frame->setObjectName("right_frame");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        right_frame->addWidget(tabWidget);

        habits_frame = new QVBoxLayout();
        habits_frame->setObjectName("habits_frame");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        widget->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_12);

        habit_title_label = new QLabel(widget);
        habit_title_label->setObjectName("habit_title_label");
        habit_title_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(habit_title_label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        generic_habit_label = new QLabel(widget);
        generic_habit_label->setObjectName("generic_habit_label");
        generic_habit_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(generic_habit_label);


        habits_frame->addWidget(widget);

        habits_scrollArea = new QScrollArea(centralwidget);
        habits_scrollArea->setObjectName("habits_scrollArea");
        habits_scrollArea->setMinimumSize(QSize(0, 200));
        habits_scrollArea->setFrameShape(QFrame::NoFrame);
        habits_scrollArea->setWidgetResizable(true);
        scrollAreahabitswidget = new QWidget();
        scrollAreahabitswidget->setObjectName("scrollAreahabitswidget");
        scrollAreahabitswidget->setGeometry(QRect(0, 0, 312, 200));
        verticalLayout_5 = new QVBoxLayout(scrollAreahabitswidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_daily_habits = new QVBoxLayout();
        verticalLayout_daily_habits->setObjectName("verticalLayout_daily_habits");

        verticalLayout_5->addLayout(verticalLayout_daily_habits);

        habits_scrollArea->setWidget(scrollAreahabitswidget);

        habits_frame->addWidget(habits_scrollArea);


        right_frame->addLayout(habits_frame);

        right_frame->setStretch(0, 5);
        right_frame->setStretch(1, 5);

        horizontalLayout_13->addLayout(right_frame);

        horizontalLayout_13->setStretch(0, 2);
        horizontalLayout_13->setStretch(1, 6);
        horizontalLayout_13->setStretch(2, 4);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        action_New->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        action_Save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        action_SaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        action_Copy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        action_Cut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        action_Paste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave_2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        settingsButton->setText(QCoreApplication::translate("MainWindow", "Recaps settings", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "I should do:", nullptr));
        Weekly_recaps->setText(QCoreApplication::translate("MainWindow", "Weekly recaps", nullptr));
        Monthly_recaps->setText(QCoreApplication::translate("MainWindow", "Mothly recaps", nullptr));
        Yearly_recaps->setText(QCoreApplication::translate("MainWindow", "Yearly recaps", nullptr));
        save_settings->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        suggestions_button->setText(QCoreApplication::translate("MainWindow", "Get suggestions", nullptr));
        activitie_button->setText(QCoreApplication::translate("MainWindow", "Activities", nullptr));
#if QT_CONFIG(tooltip)
        newEntryButton->setToolTip(QCoreApplication::translate("MainWindow", "Create a new entry", nullptr));
#endif // QT_CONFIG(tooltip)
        newEntryButton->setText(QCoreApplication::translate("MainWindow", "Today's entry", nullptr));
        type_filter->setItemText(0, QCoreApplication::translate("MainWindow", "mood", nullptr));
        type_filter->setItemText(1, QCoreApplication::translate("MainWindow", "show last n entries", nullptr));
        type_filter->setItemText(2, QCoreApplication::translate("MainWindow", "sleep wellness", nullptr));
        type_filter->setItemText(3, QCoreApplication::translate("MainWindow", "eating healthy", nullptr));
        type_filter->setItemText(4, QCoreApplication::translate("MainWindow", "productivity", nullptr));
        type_filter->setItemText(5, QCoreApplication::translate("MainWindow", "socializing", nullptr));
        type_filter->setItemText(6, QCoreApplication::translate("MainWindow", "physical activity", nullptr));

#if QT_CONFIG(tooltip)
        type_filter->setToolTip(QCoreApplication::translate("MainWindow", "What attribut you want to see", nullptr));
#endif // QT_CONFIG(tooltip)
        operation_filter->setItemText(0, QCoreApplication::translate("MainWindow", "<", nullptr));
        operation_filter->setItemText(1, QCoreApplication::translate("MainWindow", "=", nullptr));
        operation_filter->setItemText(2, QCoreApplication::translate("MainWindow", ">", nullptr));

#if QT_CONFIG(tooltip)
        operation_filter->setToolTip(QCoreApplication::translate("MainWindow", "Operator of the condition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        value_filter->setToolTip(QCoreApplication::translate("MainWindow", "The value you want to use", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        filterButton->setToolTip(QCoreApplication::translate("MainWindow", "Add a filter condition to the entries", nullptr));
#endif // QT_CONFIG(tooltip)
        filterButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
#if QT_CONFIG(tooltip)
        clear_button->setToolTip(QCoreApplication::translate("MainWindow", "Clear all the filter conditions", nullptr));
#endif // QT_CONFIG(tooltip)
        clear_button->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        existing_filters->setText(QCoreApplication::translate("MainWindow", "Filters:", nullptr));
        Test_entries->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "All Habits", nullptr));
        habit_title_label->setText(QCoreApplication::translate("MainWindow", "Habits Yet to Be Done", nullptr));
        generic_habit_label->setText(QCoreApplication::translate("MainWindow", "No Habits Left to do Today", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
