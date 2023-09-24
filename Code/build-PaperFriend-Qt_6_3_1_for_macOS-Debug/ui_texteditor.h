/********************************************************************************
** Form generated from reading UI file 'texteditor.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITOR_H
#define UI_TEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditor
{
public:
    QAction *action_Save;
    QAction *action_SavaAs;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Find;
    QAction *action_Help;
    QAction *action_Bold;
    QAction *action_Italic;
    QAction *action_Underline;
    QAction *action_Left;
    QAction *action_Right;
    QAction *action_Center;
    QAction *action_Color;
    QAction *action_Font;
    QAction *action_Just;
    QAction *action_Form;
    QAction *action_List;
    QAction *action_Line;
    QAction *action_Link;
    QVBoxLayout *verticalLayout;
    QToolBar *toolBar;
    QLineEdit *lineEdit;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *TextEditor)
    {
        if (TextEditor->objectName().isEmpty())
            TextEditor->setObjectName("TextEditor");
        TextEditor->resize(1000, 1200);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextEditor->sizePolicy().hasHeightForWidth());
        TextEditor->setSizePolicy(sizePolicy);
        TextEditor->setMaximumSize(QSize(1000, 16777215));
        action_Save = new QAction(TextEditor);
        action_Save->setObjectName("action_Save");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pictures/rsc/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon);
        action_SavaAs = new QAction(TextEditor);
        action_SavaAs->setObjectName("action_SavaAs");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pictures/rsc/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_SavaAs->setIcon(icon1);
        action_Cut = new QAction(TextEditor);
        action_Cut->setObjectName("action_Cut");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pictures/rsc/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon2);
        action_Copy = new QAction(TextEditor);
        action_Copy->setObjectName("action_Copy");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pictures/rsc/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon3);
        action_Paste = new QAction(TextEditor);
        action_Paste->setObjectName("action_Paste");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pictures/rsc/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon4);
        action_Find = new QAction(TextEditor);
        action_Find->setObjectName("action_Find");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/myImages/rsc/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Find->setIcon(icon5);
        action_Help = new QAction(TextEditor);
        action_Help->setObjectName("action_Help");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/myImages/rsc/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Help->setIcon(icon6);
        action_Bold = new QAction(TextEditor);
        action_Bold->setObjectName("action_Bold");
        action_Bold->setCheckable(true);
        action_Bold->setChecked(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/pictures/rsc/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Bold->setIcon(icon7);
        action_Italic = new QAction(TextEditor);
        action_Italic->setObjectName("action_Italic");
        action_Italic->setCheckable(true);
        action_Italic->setChecked(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/pictures/rsc/i.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Italic->setIcon(icon8);
        action_Underline = new QAction(TextEditor);
        action_Underline->setObjectName("action_Underline");
        action_Underline->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/pictures/rsc/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Underline->setIcon(icon9);
        action_Left = new QAction(TextEditor);
        action_Left->setObjectName("action_Left");
        action_Left->setCheckable(true);
        action_Left->setChecked(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/pictures/rsc/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Left->setIcon(icon10);
        action_Right = new QAction(TextEditor);
        action_Right->setObjectName("action_Right");
        action_Right->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/pictures/rsc/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Right->setIcon(icon11);
        action_Center = new QAction(TextEditor);
        action_Center->setObjectName("action_Center");
        action_Center->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/pictures/rsc/middle.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Center->setIcon(icon12);
        action_Color = new QAction(TextEditor);
        action_Color->setObjectName("action_Color");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/pictures/rsc/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Color->setIcon(icon13);
        action_Font = new QAction(TextEditor);
        action_Font->setObjectName("action_Font");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/pictures/rsc/size.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Font->setIcon(icon14);
        action_Just = new QAction(TextEditor);
        action_Just->setObjectName("action_Just");
        action_Just->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/pictures/rsc/just.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Just->setIcon(icon15);
        action_Form = new QAction(TextEditor);
        action_Form->setObjectName("action_Form");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/pictures/rsc/form.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Form->setIcon(icon16);
        action_List = new QAction(TextEditor);
        action_List->setObjectName("action_List");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/pictures/rsc/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_List->setIcon(icon17);
        action_Line = new QAction(TextEditor);
        action_Line->setObjectName("action_Line");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/pictures/rsc/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Line->setIcon(icon18);
        action_Link = new QAction(TextEditor);
        action_Link->setObjectName("action_Link");
        verticalLayout = new QVBoxLayout(TextEditor);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        toolBar = new QToolBar(TextEditor);
        toolBar->setObjectName("toolBar");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(toolBar);

        lineEdit = new QLineEdit(TextEditor);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        line = new QFrame(TextEditor);
        line->setObjectName("line");
        line->setMinimumSize(QSize(976, 2));
        line->setStyleSheet(QString::fromUtf8("rgb(0,0,0)"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(TextEditor);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 974, 1074));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName("textEdit");
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("rgd(0, 0, 0)"));

        verticalLayout_2->addWidget(textEdit);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        toolBar->addAction(action_Copy);
        toolBar->addAction(action_Cut);
        toolBar->addAction(action_Paste);
        toolBar->addSeparator();
        toolBar->addAction(action_Bold);
        toolBar->addAction(action_Italic);
        toolBar->addAction(action_Underline);
        toolBar->addAction(action_Font);
        toolBar->addAction(action_Color);
        toolBar->addSeparator();
        toolBar->addAction(action_Left);
        toolBar->addAction(action_Right);
        toolBar->addAction(action_Center);
        toolBar->addAction(action_Just);
        toolBar->addSeparator();
        toolBar->addAction(action_Form);
        toolBar->addAction(action_List);
        toolBar->addAction(action_Line);

        retranslateUi(TextEditor);

        QMetaObject::connectSlotsByName(TextEditor);
    } // setupUi

    void retranslateUi(QWidget *TextEditor)
    {
        TextEditor->setWindowTitle(QCoreApplication::translate("TextEditor", "TextEditor", nullptr));
        action_Save->setText(QCoreApplication::translate("TextEditor", "Save(&S)", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SavaAs->setText(QCoreApplication::translate("TextEditor", "Save As(&A)", nullptr));
        action_Cut->setText(QCoreApplication::translate("TextEditor", "Cut(&X)", nullptr));
#if QT_CONFIG(shortcut)
        action_Cut->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Copy->setText(QCoreApplication::translate("TextEditor", "Copy(&C)", nullptr));
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Paste->setText(QCoreApplication::translate("TextEditor", "Paste(&V)", nullptr));
#if QT_CONFIG(shortcut)
        action_Paste->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Find->setText(QCoreApplication::translate("TextEditor", "Find/Substitue(&F)", nullptr));
#if QT_CONFIG(shortcut)
        action_Find->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Help->setText(QCoreApplication::translate("TextEditor", "About", nullptr));
        action_Bold->setText(QCoreApplication::translate("TextEditor", "Bold(&B)", nullptr));
#if QT_CONFIG(tooltip)
        action_Bold->setToolTip(QCoreApplication::translate("TextEditor", "Bold(B)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Bold->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Italic->setText(QCoreApplication::translate("TextEditor", "Italic(&I)", nullptr));
#if QT_CONFIG(shortcut)
        action_Italic->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Underline->setText(QCoreApplication::translate("TextEditor", "Underline(U)", nullptr));
#if QT_CONFIG(shortcut)
        action_Underline->setShortcut(QCoreApplication::translate("TextEditor", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Left->setText(QCoreApplication::translate("TextEditor", "JustifyLeft", nullptr));
        action_Right->setText(QCoreApplication::translate("TextEditor", "JustifyRight", nullptr));
        action_Center->setText(QCoreApplication::translate("TextEditor", "JustifyCenter", nullptr));
        action_Color->setText(QCoreApplication::translate("TextEditor", "Color", nullptr));
        action_Font->setText(QCoreApplication::translate("TextEditor", "Font Setting", nullptr));
        action_Just->setText(QCoreApplication::translate("TextEditor", "Alignment of both ends", nullptr));
        action_Form->setText(QCoreApplication::translate("TextEditor", "Set Form", nullptr));
#if QT_CONFIG(tooltip)
        action_Form->setToolTip(QCoreApplication::translate("TextEditor", "Add a Form ", nullptr));
#endif // QT_CONFIG(tooltip)
        action_List->setText(QCoreApplication::translate("TextEditor", "Add List", nullptr));
        action_Line->setText(QCoreApplication::translate("TextEditor", "Add Horizontal Line", nullptr));
        action_Link->setText(QCoreApplication::translate("TextEditor", "Add Link", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TextEditor", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditor: public Ui_TextEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITOR_H
