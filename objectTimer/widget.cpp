#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    ,myTimerId(0)
{
    ui->setupUi(this);
    picId=2;

    QPixmap pix("C:\\Users\\17356\\Desktop\\project\\objectTimer\\1.jpg");
    ui->label->setPixmap(pix);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    myTimerId=this->startTimer(TIMEOUT);
}

void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId()!=myTimerId)
    {
        return;
    }

    QString path("C:\\Users\\17356\\Desktop\\project\\objectTimer\\");
    path += QString::number(picId);
    path += ".jpg";

    QPixmap pix(path);
    ui->label->setPixmap(pix);

    picId++;
    if(picId==7)
    {
        picId=1;
    }
}

void Widget::on_stopButton_clicked()
{
    if(myTimerId!=0){
        this->killTimer(myTimerId);
        myTimerId=0;
    }

}

