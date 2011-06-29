#include <QtGui/QScrollBar>

#include "pelcopwidget.h"
#include "ui_pelcopwidget.h"

PelcoPWidget::PelcoPWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PelcoPWidget)
{
    ui->setupUi(this);
    ui->textEdit->document()->setMaximumBlockCount(100);

    connect(ui->sendButton, SIGNAL(clicked()), this, SLOT(procSendButtonClick()));
    connect(ui->clearButton, SIGNAL(clicked()), this, SLOT(procClearButtonClick()));
}

PelcoPWidget::~PelcoPWidget()
{
    delete ui;
}

void PelcoPWidget::setTitle(const QString &name)
{
    this->setWindowTitle(QString(tr("Tracing I / O device: %1")).arg(name));
}

void PelcoPWidget::printTrace(const QByteArray &data, bool directionRx)
{
    ui->textEdit->setTextColor((directionRx) ? Qt::darkBlue : Qt::darkGreen);
    ui->textEdit->insertPlainText(QString(data));

    QScrollBar *bar = ui->textEdit->verticalScrollBar();
    bar->setValue(bar->maximum());
}

void PelcoPWidget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void PelcoPWidget::procSendButtonClick()
{
    QByteArray data;
    data.append(ui->lineEdit->text());
    if (data.size() > 0) {
        this->printTrace(data, false);
        emit this->sendSerialData(data);
    }
}

void PelcoPWidget::procClearButtonClick()
{
    ui->textEdit->clear();
}
