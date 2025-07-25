#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPainterPath>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::paintEvent(QPaintEvent *)
{
    /*
    //一、绘制图形
    QPainter painter(this);
    //painter.drawLine(QPoint(100,100),QPoint(400,400));

    //使用画笔
    QPen pen(Qt::green,5,Qt::DashDotLine,Qt::RoundCap,Qt::RoundJoin);
    painter.setPen(pen);
    QRectF rectangle(70.0,40.0,80.0,60.0);
    int startAngle=10*16;
    int spanAngle=160*16;
    painter.drawArc(rectangle,startAngle,spanAngle);

    //使用画刷
    QPainter painter(this);
    QPen pen;
    pen.setColor(QColor(255,0,0));
    QBrush brush(QColor(0,0,255,125));
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(50,50,200,100);

    //渐变填充
    //线性渐变
    QLinearGradient linearGradient(QPointF(40,190),QPointF(70,190));
    linearGradient.setColorAt(0,Qt::blue);
    linearGradient.setColorAt(0.5,Qt::green);
    linearGradient.setColorAt(1,Qt::red);
    linearGradient.setSpread(QGradient::ReflectSpread);
    QPainter painter(this);
    painter.setBrush(linearGradient);
    painter.drawRect(100,100,90,40);
    //幅射渐变
    QRadialGradient radialGradient(QPoint(100,190),50,QPoint(275,200));
    radialGradient.setColorAt(0,QColor(255,150,40,150));
    radialGradient.setColorAt(1,QColor(240,50,10,50));
    painter.setBrush(radialGradient);
    painter.drawEllipse(QPointF(100,200),50,50);
    //锥形渐变
    QConicalGradient conicalGradient(QPointF(250,190),60);
    conicalGradient.setColorAt(0.2,Qt::cyan);
    conicalGradient.setColorAt(0.9,Qt::green);
    painter.setBrush(conicalGradient);
    painter.drawEllipse(QPointF(250,200),50,50);*/

    /*
    //二、绘制文字
    //基本绘制
    QPainter painter(this);
    painter.drawText(100,100,"drawtext.paint-qt");

    //控制文字位置
    QPainter painter(this);
    QRectF rect(50,50,300,200);
    painter.drawRect(rect);
    painter.setPen(QColor(Qt::blue));
    painter.drawText(rect,Qt::AlignHCenter,"textposition");

    //使用字体
    QFont font("宋体",15,QFont::Bold,true);
    font.setUnderline(true);
    font.setOverline(true);
    font.setCapitalization(QFont::SmallCaps);
    font.setLetterSpacing(QFont::AbsoluteSpacing,10);
    painter.setFont(font);
    painter.setPen(Qt::red);
    painter.drawText(120,80,tr("yellow"));

    painter.translate(50,50);
    painter.rotate(90);
    painter.drawText(0,0,tr("helloqt"));


    //三、绘制路径
    //简单应用
    QPainterPath path;
    path.addEllipse(100,100,50,50);
    path.lineTo(200,200);
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setBrush(Qt::red);
    painter.drawPath(path);

    //复制图形
    QPainterPath path2;
    path2.addPath(path);
    path2.translate(100,0);
    painter.drawPath(path2);

    //绘制图形时的当前位置
    QPainterPath path;
    path.lineTo(100,100);
    path.lineTo(200,100);
    QPainter painter(this);
    painter.drawPath(path);

    //使用moveTo()改变当前点的位置
    QPainterPath path;
    path.addRect(50,50,40,40);
    path.moveTo(100,100);
    path.lineTo(200,200);
    QPainter painter(this);
    painter.drawPath(path);*/

}

Widget::~Widget()
{
    delete ui;
}
