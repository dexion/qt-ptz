#ifndef PELCOPWIDGET_H
#define PELCOPWIDGET_H

#include <QtGui/QWidget>

namespace Ui {
    class PelcoPWidget;
}

class PelcoPWidget : public QWidget
{
    Q_OBJECT

signals:
    void sendSerialData(const QByteArray &data);

public:
    explicit PelcoPWidget(QWidget *parent = 0);
    ~PelcoPWidget();

    void setTitle(const QString &name);

public slots:
    void printTrace(const QByteArray &data, bool directionRx);

protected:
    void changeEvent(QEvent *e);

private slots:
    void procSendButtonClick();
    void procClearButtonClick();

private:
    Ui::PelcoPWidget *ui;
};

#endif // PELCOPWIDGET_H
