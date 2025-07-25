#include "widget.h"
#include "ui_widget.h"
#include<QImage>
#include<QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter;
    QImage image(400,300,QImage::Format_ARGB32_Premultiplied);
    painter.begin(&image);
    painter.setBrush(Qt::yellow);
    painter.drawRect(100,50,200,200);
    painter.setBrush(QColor(30,100,0,150));
    painter.drawRect(50,0,100,80);
    painter.setCompositionMode(QPainter::CompositionMode_SourceIn);
    painter.drawRect(250,0,100,100);
    painter.setCompositionMode(QPainter::CompositionMode_DestinationOver);
    painter.drawRect(50,200,100,100);
    painter.setCompositionMode(QPainter::CompositionMode_Xor);
    painter.drawRect(250,200,100,100);
    painter.end();
    painter.begin(this);
    painter.drawImage(0,0,image);
}

Widget::~Widget()
{
    delete ui;
}
