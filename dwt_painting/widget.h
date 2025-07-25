#ifndef WIDGET_H
#define WIDGET_H
#include <QPainter>
#include <QPaintEvent>
#include <QPushButton>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
private:
    int posX;
    QPushButton* button1;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void paintEvent(QPaintEvent *event)override;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
