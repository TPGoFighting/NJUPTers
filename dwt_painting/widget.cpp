#include "widget.h"
#include "ui_widget.h"
#include <QPen>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(300,300);
    button1=new QPushButton("移动小人",this);
    posX=10;
    connect(button1,&QPushButton::clicked,[=]()
    {
        posX+=30;
        this->update();
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);
    pen.setStyle(Qt::SolidLine);
    QBrush brush(Qt::blue);
    brush.setStyle(Qt::CrossPattern);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawLine(QPoint(0,0),QPoint(100,100));
    painter.drawRect(100,100,30,40);
    painter.drawEllipse(QPoint(100,100),50,50);
    if(posX>this->width()){
        posX=10;
    }
    QPixmap originalpainting(":/new/prefix1/image/1.jpg");
    QPixmap scaledPixmap = originalpainting.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    painter.drawPixmap(posX,150,scaledPixmap);
}
