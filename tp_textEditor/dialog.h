#ifndef DIALOG_H
#define DIALOG_H
#include <QTextCharFormat>
#include <QTextCursor>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_checkBox_3_clicked(bool checked);

    void on_chkBoxUnder_clicked(bool checked);

    void on_chkBoxItalic_clicked(bool checked);

    void on_chkBoxBold_clicked(bool checked);

    void on_btnClear_clicked(bool checked);

    void on_radioRed_clicked();

    void on_radioBlack_clicked();

    void on_radioBlue_clicked();

private:
    Ui::Dialog *ui;
    void setTextColor(const QColor &color);
};
#endif // DIALOG_H
