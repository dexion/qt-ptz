/********************************************************************************
** Form generated from reading UI file 'optionswidget.ui'
**
** Created: Wed Jun 29 22:55:04 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSWIDGET_H
#define UI_OPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *Label1;
    QComboBox *baudBox;
    QLabel *Label2;
    QComboBox *dataBox;
    QLabel *Label3;
    QComboBox *parityBox;
    QLabel *Label4;
    QComboBox *stopBox;
    QLabel *Label5;
    QComboBox *flowBox;
    QPushButton *applyButton;

    void setupUi(QWidget *OptionsWidget)
    {
        if (OptionsWidget->objectName().isEmpty())
            OptionsWidget->setObjectName(QString::fromUtf8("OptionsWidget"));
        OptionsWidget->resize(161, 171);
        gridLayout = new QGridLayout(OptionsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label1 = new QLabel(OptionsWidget);
        Label1->setObjectName(QString::fromUtf8("Label1"));

        gridLayout->addWidget(Label1, 0, 0, 1, 1);

        baudBox = new QComboBox(OptionsWidget);
        baudBox->setObjectName(QString::fromUtf8("baudBox"));

        gridLayout->addWidget(baudBox, 0, 1, 1, 1);

        Label2 = new QLabel(OptionsWidget);
        Label2->setObjectName(QString::fromUtf8("Label2"));

        gridLayout->addWidget(Label2, 1, 0, 1, 1);

        dataBox = new QComboBox(OptionsWidget);
        dataBox->setObjectName(QString::fromUtf8("dataBox"));

        gridLayout->addWidget(dataBox, 1, 1, 1, 1);

        Label3 = new QLabel(OptionsWidget);
        Label3->setObjectName(QString::fromUtf8("Label3"));

        gridLayout->addWidget(Label3, 2, 0, 1, 1);

        parityBox = new QComboBox(OptionsWidget);
        parityBox->setObjectName(QString::fromUtf8("parityBox"));

        gridLayout->addWidget(parityBox, 2, 1, 1, 1);

        Label4 = new QLabel(OptionsWidget);
        Label4->setObjectName(QString::fromUtf8("Label4"));

        gridLayout->addWidget(Label4, 3, 0, 1, 1);

        stopBox = new QComboBox(OptionsWidget);
        stopBox->setObjectName(QString::fromUtf8("stopBox"));

        gridLayout->addWidget(stopBox, 3, 1, 1, 1);

        Label5 = new QLabel(OptionsWidget);
        Label5->setObjectName(QString::fromUtf8("Label5"));

        gridLayout->addWidget(Label5, 4, 0, 1, 1);

        flowBox = new QComboBox(OptionsWidget);
        flowBox->setObjectName(QString::fromUtf8("flowBox"));

        gridLayout->addWidget(flowBox, 4, 1, 1, 1);

        applyButton = new QPushButton(OptionsWidget);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setEnabled(false);

        gridLayout->addWidget(applyButton, 5, 1, 1, 1);


        retranslateUi(OptionsWidget);

        QMetaObject::connectSlotsByName(OptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *OptionsWidget)
    {
        OptionsWidget->setWindowTitle(QApplication::translate("OptionsWidget", "Form", 0, QApplication::UnicodeUTF8));
        Label1->setText(QApplication::translate("OptionsWidget", "Baud rate:", 0, QApplication::UnicodeUTF8));
        Label2->setText(QApplication::translate("OptionsWidget", "Data bits:", 0, QApplication::UnicodeUTF8));
        Label3->setText(QApplication::translate("OptionsWidget", "Parity:", 0, QApplication::UnicodeUTF8));
        Label4->setText(QApplication::translate("OptionsWidget", "Stop bits:", 0, QApplication::UnicodeUTF8));
        Label5->setText(QApplication::translate("OptionsWidget", "Flow control:", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("OptionsWidget", "Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsWidget: public Ui_OptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSWIDGET_H
