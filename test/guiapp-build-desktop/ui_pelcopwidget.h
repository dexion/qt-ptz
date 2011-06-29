/********************************************************************************
** Form generated from reading UI file 'pelcopwidget.ui'
**
** Created: Wed Jun 29 22:59:16 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PELCOPWIDGET_H
#define UI_PELCOPWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PelcoPWidget
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label;
    QPushButton *clearButton;
    QLineEdit *lineEdit;
    QPushButton *sendButton;
    QDial *dial;

    void setupUi(QWidget *PelcoPWidget)
    {
        if (PelcoPWidget->objectName().isEmpty())
            PelcoPWidget->setObjectName(QString::fromUtf8("PelcoPWidget"));
        PelcoPWidget->resize(435, 332);
        textEdit = new QTextEdit(PelcoPWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(9, 9, 417, 119));
        textEdit->setReadOnly(true);
        pushButton = new QPushButton(PelcoPWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(9, 134, 97, 27));
        pushButton_2 = new QPushButton(PelcoPWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(112, 134, 97, 27));
        pushButton_4 = new QPushButton(PelcoPWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(9, 178, 97, 27));
        pushButton_3 = new QPushButton(PelcoPWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(318, 134, 96, 27));
        pushButton_5 = new QPushButton(PelcoPWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(112, 178, 97, 27));
        pushButton_6 = new QPushButton(PelcoPWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(318, 178, 96, 27));
        pushButton_7 = new QPushButton(PelcoPWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(9, 223, 97, 27));
        pushButton_8 = new QPushButton(PelcoPWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(112, 223, 97, 27));
        pushButton_9 = new QPushButton(PelcoPWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(318, 223, 96, 27));
        label = new QLabel(PelcoPWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(112, 289, 302, 34));
        label->setAlignment(Qt::AlignCenter);
        clearButton = new QPushButton(PelcoPWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(9, 292, 95, 27));
        lineEdit = new QLineEdit(PelcoPWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(112, 256, 301, 27));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        sendButton = new QPushButton(PelcoPWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(9, 256, 85, 27));
        dial = new QDial(PelcoPWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(200, 130, 121, 121));

        retranslateUi(PelcoPWidget);

        QMetaObject::connectSlotsByName(PelcoPWidget);
    } // setupUi

    void retranslateUi(QWidget *PelcoPWidget)
    {
        PelcoPWidget->setWindowTitle(QApplication::translate("PelcoPWidget", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("PelcoPWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PelcoPWidget", "(Here enter a line in text a format for sending, \n"
" for example: I will be transferred)", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("PelcoPWidget", "Clear trace", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("PelcoPWidget", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PelcoPWidget: public Ui_PelcoPWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PELCOPWIDGET_H
