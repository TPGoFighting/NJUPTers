#include "dialog.h"
#include "ui_dialog.h"
#include <QPainter>

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)

	, ui(new Ui::Dialog) {
	ui->setupUi(this);
}

void Dialog::paintEvent(QPaintEvent *) {

	QPainter painter(this);
	QPixmap pix;
	pix.load("D:/studyqt/ÏîÄ¿/mypixmap/tentae.jpg");
	painter.drawPixmap(0, 0, 80, 100, pix);


	painter.translate(100, 100);
	painter.drawPixmap(0, 0, 80, 100, pix);


	qreal width = pix.width();
	qreal height = pix.height();
	pix = pix.scaled(width * 0.15, height * 0.15, Qt::KeepAspectRatio);
	painter.drawPixmap(90, 90, pix);
	/*QPixmap scaledPix=pix.scaled(300,200,Qt::KeepAspectRatio);
	painter.drawPixmap(100,100,scaledPix);*/


	painter.translate(40, 50);
	painter.rotate(90);
	painter.translate(-40, -50);
	painter.drawPixmap(100, 100, 80, 100, pix);


	painter.shear(0.7, 0);
	painter.drawPixmap(100, 0, 80, 100, pix);
}

Dialog::~Dialog() {
	delete ui;
}
