/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *b_clear;
    QPushButton *b_add;
    QPushButton *b_reduve;
    QPushButton *b_del;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QPushButton *b_mul;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *b_div;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *bleft;
    QPushButton *b0;
    QPushButton *bright;
    QPushButton *b_equal;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(210, 307);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(11);
        Widget->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 171, 41));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 70, 180, 226));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        b_clear = new QPushButton(layoutWidget);
        b_clear->setObjectName("b_clear");
        b_clear->setMinimumSize(QSize(40, 40));
        b_clear->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b_clear, 0, 0, 1, 1);

        b_add = new QPushButton(layoutWidget);
        b_add->setObjectName("b_add");
        b_add->setMinimumSize(QSize(40, 40));
        b_add->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b_add, 0, 1, 1, 1);

        b_reduve = new QPushButton(layoutWidget);
        b_reduve->setObjectName("b_reduve");
        b_reduve->setMinimumSize(QSize(40, 40));
        b_reduve->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b_reduve, 0, 2, 1, 1);

        b_del = new QPushButton(layoutWidget);
        b_del->setObjectName("b_del");
        b_del->setMinimumSize(QSize(40, 40));
        b_del->setMaximumSize(QSize(40, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/1.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        b_del->setIcon(icon);
        b_del->setIconSize(QSize(50, 50));

        gridLayout->addWidget(b_del, 0, 3, 1, 1);

        b7 = new QPushButton(layoutWidget);
        b7->setObjectName("b7");
        b7->setMinimumSize(QSize(40, 40));
        b7->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b7, 1, 0, 1, 1);

        b8 = new QPushButton(layoutWidget);
        b8->setObjectName("b8");
        b8->setMinimumSize(QSize(40, 40));
        b8->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b8, 1, 1, 1, 1);

        b9 = new QPushButton(layoutWidget);
        b9->setObjectName("b9");
        b9->setMinimumSize(QSize(40, 40));
        b9->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b9, 1, 2, 1, 1);

        b_mul = new QPushButton(layoutWidget);
        b_mul->setObjectName("b_mul");
        b_mul->setMinimumSize(QSize(40, 40));
        b_mul->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b_mul, 1, 3, 1, 1);

        b4 = new QPushButton(layoutWidget);
        b4->setObjectName("b4");
        b4->setMinimumSize(QSize(40, 40));
        b4->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b4, 2, 0, 1, 1);

        b5 = new QPushButton(layoutWidget);
        b5->setObjectName("b5");
        b5->setMinimumSize(QSize(40, 40));
        b5->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b5, 2, 1, 1, 1);

        b6 = new QPushButton(layoutWidget);
        b6->setObjectName("b6");
        b6->setMinimumSize(QSize(40, 40));
        b6->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b6, 2, 2, 1, 1);

        b_div = new QPushButton(layoutWidget);
        b_div->setObjectName("b_div");
        b_div->setMinimumSize(QSize(40, 40));
        b_div->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b_div, 2, 3, 1, 1);

        b1 = new QPushButton(layoutWidget);
        b1->setObjectName("b1");
        b1->setMinimumSize(QSize(40, 40));
        b1->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b1, 3, 0, 1, 1);

        b2 = new QPushButton(layoutWidget);
        b2->setObjectName("b2");
        b2->setMinimumSize(QSize(40, 40));
        b2->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b2, 3, 1, 1, 1);

        b3 = new QPushButton(layoutWidget);
        b3->setObjectName("b3");
        b3->setMinimumSize(QSize(40, 40));
        b3->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b3, 3, 2, 1, 1);

        bleft = new QPushButton(layoutWidget);
        bleft->setObjectName("bleft");
        bleft->setMinimumSize(QSize(40, 40));
        bleft->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(bleft, 4, 0, 1, 1);

        b0 = new QPushButton(layoutWidget);
        b0->setObjectName("b0");
        b0->setMinimumSize(QSize(40, 40));
        b0->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(b0, 4, 1, 1, 1);

        bright = new QPushButton(layoutWidget);
        bright->setObjectName("bright");
        bright->setMinimumSize(QSize(40, 40));
        bright->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(bright, 4, 2, 1, 1);

        b_equal = new QPushButton(layoutWidget);
        b_equal->setObjectName("b_equal");
        b_equal->setMinimumSize(QSize(40, 40));
        b_equal->setMaximumSize(QSize(40, 90));

        gridLayout->addWidget(b_equal, 3, 3, 2, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        b_clear->setText(QCoreApplication::translate("Widget", "c", nullptr));
        b_add->setText(QCoreApplication::translate("Widget", "+", nullptr));
        b_reduve->setText(QCoreApplication::translate("Widget", "-", nullptr));
        b_del->setText(QString());
        b7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        b8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        b9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        b_mul->setText(QCoreApplication::translate("Widget", "*", nullptr));
        b4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        b5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        b6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        b_div->setText(QCoreApplication::translate("Widget", "/", nullptr));
        b1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        b2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        b3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        bleft->setText(QCoreApplication::translate("Widget", "(", nullptr));
        b0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        bright->setText(QCoreApplication::translate("Widget", ")", nullptr));
        b_equal->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
