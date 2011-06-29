/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created: Wed Jun 29 22:59:16 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *portsLabel;
    QLabel *msgLabel;
    QComboBox *portBox;
    QPlainTextEdit *plainTextEdit;
    QPushButton *controlButton;
    QPushButton *infoButton;
    QPushButton *ioButton;
    QSpacerItem *verticalSpacer;
    QPushButton *dtrButton;
    QHBoxLayout *horizontalLayout;
    QFrame *line1;
    QLabel *dsrLabel;
    QFrame *line2;
    QLabel *dtrLabel;
    QFrame *line;
    QLabel *ctsLabel;
    QFrame *line_2;
    QLabel *rtsLabel;
    QFrame *line_3;
    QLabel *dcdLabel;
    QFrame *line3;
    QLabel *ringLabel;
    QFrame *line_4;
    QLabel *leLabel;
    QFrame *line_5;
    QPushButton *optionsButton;
    QLabel *lineLabel;
    QPushButton *rtsButton;
    QPushButton *pelcoPButton;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(435, 311);
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        portsLabel = new QLabel(MainWidget);
        portsLabel->setObjectName(QString::fromUtf8("portsLabel"));

        gridLayout->addWidget(portsLabel, 0, 0, 1, 1);

        msgLabel = new QLabel(MainWidget);
        msgLabel->setObjectName(QString::fromUtf8("msgLabel"));
        msgLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(msgLabel, 0, 1, 1, 1);

        portBox = new QComboBox(MainWidget);
        portBox->setObjectName(QString::fromUtf8("portBox"));

        gridLayout->addWidget(portBox, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(MainWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 1, 1, 8, 1);

        controlButton = new QPushButton(MainWidget);
        controlButton->setObjectName(QString::fromUtf8("controlButton"));

        gridLayout->addWidget(controlButton, 2, 0, 1, 1);

        infoButton = new QPushButton(MainWidget);
        infoButton->setObjectName(QString::fromUtf8("infoButton"));

        gridLayout->addWidget(infoButton, 4, 0, 1, 1);

        ioButton = new QPushButton(MainWidget);
        ioButton->setObjectName(QString::fromUtf8("ioButton"));

        gridLayout->addWidget(ioButton, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(72, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        dtrButton = new QPushButton(MainWidget);
        dtrButton->setObjectName(QString::fromUtf8("dtrButton"));

        gridLayout->addWidget(dtrButton, 10, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line1 = new QFrame(MainWidget);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::VLine);
        line1->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line1);

        dsrLabel = new QLabel(MainWidget);
        dsrLabel->setObjectName(QString::fromUtf8("dsrLabel"));

        horizontalLayout->addWidget(dsrLabel);

        line2 = new QFrame(MainWidget);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setFrameShape(QFrame::VLine);
        line2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line2);

        dtrLabel = new QLabel(MainWidget);
        dtrLabel->setObjectName(QString::fromUtf8("dtrLabel"));

        horizontalLayout->addWidget(dtrLabel);

        line = new QFrame(MainWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        ctsLabel = new QLabel(MainWidget);
        ctsLabel->setObjectName(QString::fromUtf8("ctsLabel"));

        horizontalLayout->addWidget(ctsLabel);

        line_2 = new QFrame(MainWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        rtsLabel = new QLabel(MainWidget);
        rtsLabel->setObjectName(QString::fromUtf8("rtsLabel"));

        horizontalLayout->addWidget(rtsLabel);

        line_3 = new QFrame(MainWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        dcdLabel = new QLabel(MainWidget);
        dcdLabel->setObjectName(QString::fromUtf8("dcdLabel"));

        horizontalLayout->addWidget(dcdLabel);

        line3 = new QFrame(MainWidget);
        line3->setObjectName(QString::fromUtf8("line3"));
        line3->setFrameShape(QFrame::VLine);
        line3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line3);

        ringLabel = new QLabel(MainWidget);
        ringLabel->setObjectName(QString::fromUtf8("ringLabel"));

        horizontalLayout->addWidget(ringLabel);

        line_4 = new QFrame(MainWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        leLabel = new QLabel(MainWidget);
        leLabel->setObjectName(QString::fromUtf8("leLabel"));

        horizontalLayout->addWidget(leLabel);

        line_5 = new QFrame(MainWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);


        gridLayout->addLayout(horizontalLayout, 10, 1, 1, 1);

        optionsButton = new QPushButton(MainWidget);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));

        gridLayout->addWidget(optionsButton, 3, 0, 1, 1);

        lineLabel = new QLabel(MainWidget);
        lineLabel->setObjectName(QString::fromUtf8("lineLabel"));
        lineLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineLabel, 9, 1, 1, 1);

        rtsButton = new QPushButton(MainWidget);
        rtsButton->setObjectName(QString::fromUtf8("rtsButton"));

        gridLayout->addWidget(rtsButton, 9, 0, 1, 1);

        pelcoPButton = new QPushButton(MainWidget);
        pelcoPButton->setObjectName(QString::fromUtf8("pelcoPButton"));

        gridLayout->addWidget(pelcoPButton, 6, 0, 1, 1);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "Simple GUI application for demonstrating the use of QSerialDevice.", 0, QApplication::UnicodeUTF8));
        portsLabel->setText(QApplication::translate("MainWidget", "Available ports:", 0, QApplication::UnicodeUTF8));
        msgLabel->setText(QApplication::translate("MainWidget", "State messages", 0, QApplication::UnicodeUTF8));
        controlButton->setText(QApplication::translate("MainWidget", "Open", 0, QApplication::UnicodeUTF8));
        infoButton->setText(QApplication::translate("MainWidget", "Get info", 0, QApplication::UnicodeUTF8));
        ioButton->setText(QApplication::translate("MainWidget", "Input/Output", 0, QApplication::UnicodeUTF8));
        dtrButton->setText(QApplication::translate("MainWidget", "Set DTR", 0, QApplication::UnicodeUTF8));
        dsrLabel->setText(QApplication::translate("MainWidget", "DSR", 0, QApplication::UnicodeUTF8));
        dtrLabel->setText(QApplication::translate("MainWidget", "DTR", 0, QApplication::UnicodeUTF8));
        ctsLabel->setText(QApplication::translate("MainWidget", "CTS", 0, QApplication::UnicodeUTF8));
        rtsLabel->setText(QApplication::translate("MainWidget", "RTS", 0, QApplication::UnicodeUTF8));
        dcdLabel->setText(QApplication::translate("MainWidget", "DCD", 0, QApplication::UnicodeUTF8));
        ringLabel->setText(QApplication::translate("MainWidget", "RING", 0, QApplication::UnicodeUTF8));
        leLabel->setText(QApplication::translate("MainWidget", "LE", 0, QApplication::UnicodeUTF8));
        optionsButton->setText(QApplication::translate("MainWidget", "Options", 0, QApplication::UnicodeUTF8));
        lineLabel->setText(QApplication::translate("MainWidget", "Serial lines states", 0, QApplication::UnicodeUTF8));
        rtsButton->setText(QApplication::translate("MainWidget", "Set RTS", 0, QApplication::UnicodeUTF8));
        pelcoPButton->setText(QApplication::translate("MainWidget", "Pelco P", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
