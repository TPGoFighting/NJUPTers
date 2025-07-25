#include "dialog.h"
#include "ui_dialog.h"
#include <QTextCharFormat>
#include <QTextCursor>
#include <QColor>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_chkBoxUnder_clicked(bool checked)
{//Underline 复选框
    QFont  font=ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}
//1. 先获取当前字体（QFont font = ui->plainTextEdit->font();）
//ui->plainTextEdit->font() 会返回当前文本编辑框正在使用的字体对象（QFont），这个对象包含了当前的所有字体属性：字体家族（如 "微软雅黑"）、大小、是否粗体、是否斜体、是否有下划线等。
//为什么要先获取当前字体？
//因为如果直接新建一个空白的QFont对象（如QFont font;），会丢失之前设置的其他属性（比如之前已经设置了粗体，新建对象后粗体属性会被重置为默认值）。
//举例：如果用户先勾选了 “粗体”，再勾选 “下划线”，若不先获取当前字体，下划线设置后会导致粗体效果消失。
//2. 修改目标属性（font.setUnderline(checked);）
//setUnderline(checked) 是QFont类的成员函数，用于设置字体是否有下划线：
//当复选框被勾选时（checked = true），字体添加下划线；
//当复选框取消勾选时（checked = false），字体移除下划线。
//这一步只修改了 “下划线” 这一个属性，其他属性（如粗体、斜体、字体大小等）会保持获取时的状态不变。
//3.应用修改后的字体（ui->plainTextEdit->setFont(font);）
//最后需要将修改后的字体对象重新设置回文本编辑框，才能让界面显示更新后的效果。
//如果只修改font对象而不调用setFont，文本编辑框的显示不会有任何变化（因为控件仍在使用旧的字体对象）。

void Dialog::on_chkBoxItalic_clicked(bool checked)
{//Italic
    QFont  font=ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_chkBoxBold_clicked(bool checked)
{//Bold
    QFont  font=ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}



void Dialog::on_btnClear_clicked(bool checked)
{//Clear
    ui->plainTextEdit->clear();
}

void Dialog::on_radioRed_clicked()
{
    setTextColor(Qt::red);
}


void Dialog::on_radioBlue_clicked()
{
    setTextColor(Qt::blue);
}

void Dialog::on_radioBlack_clicked()
{
    setTextColor(Qt::black);
}

void Dialog::setTextColor(const QColor &color)
{
    QTextCharFormat format;
    format.setForeground(color);  // 设置文本前景色（文字颜色）

    QTextCursor cursor = ui->plainTextEdit->textCursor();
    bool hasSelection = cursor.hasSelection();  // 记录是否有原选中内容

    // 如果没有选中文本，选中整个文档
    if (!hasSelection)
        cursor.select(QTextCursor::Document);

    // 应用颜色格式
    cursor.mergeCharFormat(format);

    // 关键：清除选中状态（让光标恢复到“未选中”状态）
    if (!hasSelection)  // 只有原无选中时才清除，避免覆盖用户主动选中的内容
    {
        cursor.clearSelection();  // 清除选中
        cursor.movePosition(QTextCursor::End);  // 可选：将光标移到末尾
    }

    // 将处理后的光标设置回文本框
    ui->plainTextEdit->setTextCursor(cursor);
}
