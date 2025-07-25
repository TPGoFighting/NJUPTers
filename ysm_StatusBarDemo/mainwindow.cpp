#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStatusBar *sb=statusBar();
    QLabel *label=new QLabel("Label");
    QLineEdit *edit=new QLineEdit();
    QPushButton *Btn=new QPushButton("Button");

    sb->addPermanentWidget(label);
    sb->addPermanentWidget(edit);
    sb->addPermanentWidget(Btn);

    sb->showMessage("Hello Qt");
}

MainWindow::~MainWindow()
{
    delete ui;
}
