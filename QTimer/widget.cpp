#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer = new QTimer;
    picID = 2;

    QImage img;
    img.load("C:\\Users\\17356\\Desktop\\project\\QTimer\\picture\\1.jpg");
    ui->label->setPixmap(QPixmap::fromImage(img));

    connect(timer,&QTimer::timeout,this,&Widget::timeoutSlot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    timer->start(TIMEOUT);
}

void Widget::timeoutSlot()
{
    QString path("C:\\Users\\17356\\Desktop\\project\\QTimer\\picture");
    path += QString::number(picID);
    path += ".jpg";

    QImage img;
    img.load(path);
    ui->label->setPixmap(QPixmap::fromImage(img));

    picID++;
    if(picID==7)
    {
        picID=1;
    }

}

void Widget::on_stopButton_clicked()
{
    timer->stop();
}

