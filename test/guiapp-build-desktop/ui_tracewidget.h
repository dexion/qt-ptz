/********************************************************************************
** Form generated from reading UI file 'tracewidget.ui'
**
** Created: Wed Jun 29 22:55:04 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACEWIDGET_H
#define UI_TRACEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraceWidget
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QPushButton *sendButton;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QLabel *label;

    void setupUi(QWidget *TraceWidget)
    {
        if (TraceWidget->objectName().isEmpty())
            TraceWidget->setObjectName(QString::fromUtf8("TraceWidget"));
        TraceWidget->resize(380, 332);
        gridLayout = new QGridLayout(TraceWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(TraceWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 2);

        sendButton = new QPushButton(TraceWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        gridLayout->addWidget(sendButton, 1, 0, 1, 1);

        lineEdit = new QLineEdit(TraceWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        clearButton = new QPushButton(TraceWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        gridLayout->addWidget(clearButton, 2, 0, 1, 1);

        label = new QLabel(TraceWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 1, 1, 1);


        retranslateUi(TraceWidget);

        QMetaObject::connectSlotsByName(TraceWidget);
    } // setupUi

    void retranslateUi(QWidget *TraceWidget)
    {
        TraceWidget->setWindowTitle(QApplication::translate("TraceWidget", "Form", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("TraceWidget", "Send", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("TraceWidget", "Clear trace", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TraceWidget", "(Here enter a line in text a format for sending, \n"
" for example: I will be transferred)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TraceWidget: public Ui_TraceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACEWIDGET_H
