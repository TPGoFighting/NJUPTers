#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器");
    QFont f("仿宋",14);
    ui->lineEdit->setFont(f);

    //按钮上放图片
    QIcon con("C:\\Users\17356\\Desktop\\calculator_ymy\\1");
    ui->b_del->setIcon(con);

    //改变按钮颜色
    ui->b_equal->setStyleSheet("background:purple");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_b1_clicked()
{
    expression +="1";
    ui->lineEdit->setText(expression);
}


void Widget::on_bleft_clicked()
{
    expression +="(";
    ui->lineEdit->setText(expression);
}


void Widget::on_b0_clicked()
{
    expression +="0";
    ui->lineEdit->setText(expression);
}


void Widget::on_bright_clicked()
{
    expression +=")";
    ui->lineEdit->setText(expression);
}


void Widget::on_b2_clicked()
{
    expression +="2";
    ui->lineEdit->setText(expression);
}


void Widget::on_b3_clicked()
{
    expression +="3";
    ui->lineEdit->setText(expression);
}


void Widget::on_b4_clicked()
{
    expression +="4";
    ui->lineEdit->setText(expression);
}


void Widget::on_b5_clicked()
{
    expression +="5";
    ui->lineEdit->setText(expression);
}


void Widget::on_b6_clicked()
{
    expression +="6";
    ui->lineEdit->setText(expression);
}


void Widget::on_b7_clicked()
{
    expression +="7";
    ui->lineEdit->setText(expression);
}


void Widget::on_b8_clicked()
{
    expression +="8";
    ui->lineEdit->setText(expression);
}


void Widget::on_b9_clicked()
{
    expression +="9";
    ui->lineEdit->setText(expression);
}


void Widget::on_b_add_clicked()
{
    expression +="+";
    ui->lineEdit->setText(expression);
}


void Widget::on_b_reduve_clicked()
{
    expression +="-";
    ui->lineEdit->setText(expression);
}


void Widget::on_b_mul_clicked()
{
    expression +="*";
    ui->lineEdit->setText(expression);
}


void Widget::on_b_div_clicked()
{
    expression +="/";
    ui->lineEdit->setText(expression);
}

void Widget::on_b_clear_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
}


void Widget::on_b_del_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}


void Widget::on_b_equal_clicked()
{
    QStack<double> s_num,s_opt;

    QByteArray ba=expression.toUtf8();
    char opt[128]={0};
    int i=0;
    double tmp=0,num1,num2;
    bool isnegative = false;//标记是否为负数
    strncpy(opt,ba.constData(),sizeof(opt)-1);

    while(opt[i]!='\0'||s_opt.empty()!=true)
    {
        if(opt[i]>='0'&&opt[i]<='9')
        {
            tmp=tmp*10+opt[i]-'0';
            i++;
            if(opt[i]<'0'||opt[i]>'9')
            {
                if(isnegative)
                {
                    tmp = -tmp;
                    isnegative=false;
                }
                s_num.push(tmp);
                tmp=0;
            }
        }
        else   //操作符
        {
            if(opt[i]=='-'&&(i==0||s_opt.top()=='('||Priority(opt[i-1]>=1)))
            {
                isnegative=true;
                i++;
                continue;
            }
            if(s_opt.empty()==true
                ||Priority(opt[i])>Priority(s_opt.top())
                ||(s_opt.top()=='('&& opt[i]!=')'))
            {
                s_opt.push(opt[i]);
                i++;
                continue;
            }
            if(s_opt.top()=='('&& opt[i]==')')
            {
                s_opt.pop();
                i++;
                continue;
            }
            if(Priority(opt[i])<=Priority(s_opt.top())||
                (opt[i]==')'&&s_opt.top()!='(')||
                (opt[i]=='\0'&& !s_opt.empty()))
            {
                if(s_num.size()<2)
                {
                    ui->lineEdit->setText("Expr Error!");
                    expression.clear();
                    return;
                }
                char ch = s_opt.top();
                s_opt.pop();

                num1=s_num.top();
                s_num.pop();
                num2=s_num.top();
                s_num.pop();
                double result =0;
                    switch(ch)
                    {
                    case '+':
                        result=(num1+num2);
                        break;

                    case '-':
                        result=(num1-num2);
                        break;

                    case '*':
                        result=(num1*num2);
                        break;
                    case '/':
                        if(num1==0)
                        {
                            ui->lineEdit->setText("Div by Zero!");
                            expression.clear();
                            return;
                        }
                        result=num2/num1;
                        break;
                    }
                    s_num.push(result);
            }

        }
    }
    ui->lineEdit->setText(QString::number(s_num.top()));
    expression.clear();
}

int Widget::Priority(char ch)
{
    switch(ch)
    {
    case '(':
        return 3;
    case '*':
    case '/':
        return 2;
    case '-':
    case '+':
        return 1;
    default:
        return 0;
    }

}

