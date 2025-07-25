#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStack>
#include <string.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_b1_clicked();

    void on_bleft_clicked();

    void on_b0_clicked();

    void on_bright_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_b_add_clicked();

    void on_b_reduve_clicked();

    void on_b_mul_clicked();

    void on_b_div_clicked();

    void on_b_equal_clicked();

    void on_b_clear_clicked();

    void on_b_del_clicked();

private:
    Ui::Widget *ui;
    QString expression;
    int Priority(char ch);
};
#endif // WIDGET_H
