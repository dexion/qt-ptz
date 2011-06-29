/********************************************************************************
** Form generated from reading UI file 'infowidget.ui'
**
** Created: Wed Jun 29 22:55:04 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWIDGET_H
#define UI_INFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *shortLabel;
    QLabel *syspathLabel;
    QLabel *subsysLabel;
    QLabel *locationLabel;
    QLabel *driverLabel;
    QLabel *friendlyLabel;
    QLabel *descrLabel;
    QLabel *mfgLabel;
    QLabel *vidLabel;
    QLabel *pidLabel;
    QLabel *serviceLabel;
    QLabel *busLabel;
    QLabel *revLabel;
    QFrame *line;
    QLabel *exLabel;
    QLabel *busyLabel;

    void setupUi(QWidget *InfoWidget)
    {
        if (InfoWidget->objectName().isEmpty())
            InfoWidget->setObjectName(QString::fromUtf8("InfoWidget"));
        InfoWidget->resize(81, 306);
        verticalLayout = new QVBoxLayout(InfoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        shortLabel = new QLabel(InfoWidget);
        shortLabel->setObjectName(QString::fromUtf8("shortLabel"));

        verticalLayout->addWidget(shortLabel);

        syspathLabel = new QLabel(InfoWidget);
        syspathLabel->setObjectName(QString::fromUtf8("syspathLabel"));

        verticalLayout->addWidget(syspathLabel);

        subsysLabel = new QLabel(InfoWidget);
        subsysLabel->setObjectName(QString::fromUtf8("subsysLabel"));

        verticalLayout->addWidget(subsysLabel);

        locationLabel = new QLabel(InfoWidget);
        locationLabel->setObjectName(QString::fromUtf8("locationLabel"));

        verticalLayout->addWidget(locationLabel);

        driverLabel = new QLabel(InfoWidget);
        driverLabel->setObjectName(QString::fromUtf8("driverLabel"));

        verticalLayout->addWidget(driverLabel);

        friendlyLabel = new QLabel(InfoWidget);
        friendlyLabel->setObjectName(QString::fromUtf8("friendlyLabel"));

        verticalLayout->addWidget(friendlyLabel);

        descrLabel = new QLabel(InfoWidget);
        descrLabel->setObjectName(QString::fromUtf8("descrLabel"));

        verticalLayout->addWidget(descrLabel);

        mfgLabel = new QLabel(InfoWidget);
        mfgLabel->setObjectName(QString::fromUtf8("mfgLabel"));

        verticalLayout->addWidget(mfgLabel);

        vidLabel = new QLabel(InfoWidget);
        vidLabel->setObjectName(QString::fromUtf8("vidLabel"));

        verticalLayout->addWidget(vidLabel);

        pidLabel = new QLabel(InfoWidget);
        pidLabel->setObjectName(QString::fromUtf8("pidLabel"));

        verticalLayout->addWidget(pidLabel);

        serviceLabel = new QLabel(InfoWidget);
        serviceLabel->setObjectName(QString::fromUtf8("serviceLabel"));

        verticalLayout->addWidget(serviceLabel);

        busLabel = new QLabel(InfoWidget);
        busLabel->setObjectName(QString::fromUtf8("busLabel"));

        verticalLayout->addWidget(busLabel);

        revLabel = new QLabel(InfoWidget);
        revLabel->setObjectName(QString::fromUtf8("revLabel"));

        verticalLayout->addWidget(revLabel);

        line = new QFrame(InfoWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        exLabel = new QLabel(InfoWidget);
        exLabel->setObjectName(QString::fromUtf8("exLabel"));

        verticalLayout->addWidget(exLabel);

        busyLabel = new QLabel(InfoWidget);
        busyLabel->setObjectName(QString::fromUtf8("busyLabel"));

        verticalLayout->addWidget(busyLabel);


        retranslateUi(InfoWidget);

        QMetaObject::connectSlotsByName(InfoWidget);
    } // setupUi

    void retranslateUi(QWidget *InfoWidget)
    {
        InfoWidget->setWindowTitle(QApplication::translate("InfoWidget", "Form", 0, QApplication::UnicodeUTF8));
        shortLabel->setText(QApplication::translate("InfoWidget", "shortLabel", 0, QApplication::UnicodeUTF8));
        syspathLabel->setText(QApplication::translate("InfoWidget", "syspathLabel", 0, QApplication::UnicodeUTF8));
        subsysLabel->setText(QApplication::translate("InfoWidget", "subsysLabel", 0, QApplication::UnicodeUTF8));
        locationLabel->setText(QApplication::translate("InfoWidget", "locationLabel", 0, QApplication::UnicodeUTF8));
        driverLabel->setText(QApplication::translate("InfoWidget", "driverLabel", 0, QApplication::UnicodeUTF8));
        friendlyLabel->setText(QApplication::translate("InfoWidget", "friendlyLabel", 0, QApplication::UnicodeUTF8));
        descrLabel->setText(QApplication::translate("InfoWidget", "descrLabel", 0, QApplication::UnicodeUTF8));
        mfgLabel->setText(QApplication::translate("InfoWidget", "mfgLabel", 0, QApplication::UnicodeUTF8));
        vidLabel->setText(QApplication::translate("InfoWidget", "vidLabel", 0, QApplication::UnicodeUTF8));
        pidLabel->setText(QApplication::translate("InfoWidget", "pidLabel", 0, QApplication::UnicodeUTF8));
        serviceLabel->setText(QApplication::translate("InfoWidget", "serviceLabel", 0, QApplication::UnicodeUTF8));
        busLabel->setText(QApplication::translate("InfoWidget", "busLabel", 0, QApplication::UnicodeUTF8));
        revLabel->setText(QApplication::translate("InfoWidget", "revLabel", 0, QApplication::UnicodeUTF8));
        exLabel->setText(QApplication::translate("InfoWidget", "exLabel", 0, QApplication::UnicodeUTF8));
        busyLabel->setText(QApplication::translate("InfoWidget", "busyLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoWidget: public Ui_InfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWIDGET_H
