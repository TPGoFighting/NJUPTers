/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *groupBox_Font;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QHBoxLayout *groupBox_Color;
    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnExit;
    QPushButton *btnClear;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(409, 295);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_Font = new QHBoxLayout();
        groupBox_Font->setObjectName("groupBox_Font");
        chkBoxUnder = new QCheckBox(Dialog);
        chkBoxUnder->setObjectName("chkBoxUnder");

        groupBox_Font->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(Dialog);
        chkBoxItalic->setObjectName("chkBoxItalic");

        groupBox_Font->addWidget(chkBoxItalic);

        chkBoxBold = new QCheckBox(Dialog);
        chkBoxBold->setObjectName("chkBoxBold");

        groupBox_Font->addWidget(chkBoxBold);


        verticalLayout->addLayout(groupBox_Font);

        groupBox_Color = new QHBoxLayout();
        groupBox_Color->setObjectName("groupBox_Color");
        radioBlack = new QRadioButton(Dialog);
        radioBlack->setObjectName("radioBlack");

        groupBox_Color->addWidget(radioBlack);

        radioRed = new QRadioButton(Dialog);
        radioRed->setObjectName("radioRed");

        groupBox_Color->addWidget(radioRed);

        radioBlue = new QRadioButton(Dialog);
        radioBlue->setObjectName("radioBlue");

        groupBox_Color->addWidget(radioBlue);


        verticalLayout->addLayout(groupBox_Color);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft JhengHei UI")});
        font.setPointSize(35);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName("btnOK");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/322.bmp"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        btnOK->setIcon(icon);

        horizontalLayout_3->addWidget(btnOK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnExit = new QPushButton(Dialog);
        btnExit->setObjectName("btnExit");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/132.bmp"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        btnExit->setIcon(icon1);

        horizontalLayout_3->addWidget(btnExit);

        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName("btnClear");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/212.bmp"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        btnClear->setIcon(icon2);

        horizontalLayout_3->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(chkBoxUnder, chkBoxItalic);
        QWidget::setTabOrder(chkBoxItalic, chkBoxBold);
        QWidget::setTabOrder(chkBoxBold, radioBlack);
        QWidget::setTabOrder(radioBlack, radioRed);
        QWidget::setTabOrder(radioRed, radioBlue);
        QWidget::setTabOrder(radioBlue, btnOK);
        QWidget::setTabOrder(btnOK, btnExit);
        QWidget::setTabOrder(btnExit, btnClear);
        QWidget::setTabOrder(btnClear, plainTextEdit);

        retranslateUi(Dialog);
        QObject::connect(btnOK, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(btnExit, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));
        QObject::connect(btnClear, &QPushButton::clicked, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        chkBoxUnder->setText(QCoreApplication::translate("Dialog", "Underline", nullptr));
        chkBoxItalic->setText(QCoreApplication::translate("Dialog", "Italic", nullptr));
        chkBoxBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        radioBlack->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        radioRed->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
        radioBlue->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "TPGoFighting\n"
"", nullptr));
        btnOK->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        btnExit->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
        btnClear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
