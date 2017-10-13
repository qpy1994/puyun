/********************************************************************************
** Form generated from reading UI file 'choosetype.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETYPE_H
#define UI_CHOOSETYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_chooseType
{
public:
    QLabel *label;
    QRadioButton *tBtn;
    QRadioButton *sBtn;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *chooseType)
    {
        if (chooseType->objectName().isEmpty())
            chooseType->setObjectName(QStringLiteral("chooseType"));
        chooseType->resize(537, 383);
        label = new QLabel(chooseType);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 60, 261, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        tBtn = new QRadioButton(chooseType);
        tBtn->setObjectName(QStringLiteral("tBtn"));
        tBtn->setGeometry(QRect(190, 170, 89, 16));
        sBtn = new QRadioButton(chooseType);
        sBtn->setObjectName(QStringLiteral("sBtn"));
        sBtn->setGeometry(QRect(310, 170, 89, 16));
        okBtn = new QPushButton(chooseType);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(160, 260, 75, 23));
        cancelBtn = new QPushButton(chooseType);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(290, 260, 75, 23));

        retranslateUi(chooseType);
        QObject::connect(cancelBtn, SIGNAL(clicked()), chooseType, SLOT(close()));

        QMetaObject::connectSlotsByName(chooseType);
    } // setupUi

    void retranslateUi(QDialog *chooseType)
    {
        chooseType->setWindowTitle(QApplication::translate("chooseType", "chooseType", 0));
        label->setText(QApplication::translate("chooseType", "\350\257\267\351\200\211\346\213\251\344\275\240\350\246\201\346\263\250\345\206\214\347\232\204\347\224\250\346\210\267\347\261\273\345\236\213\357\274\232", 0));
        tBtn->setText(QApplication::translate("chooseType", "\350\200\201\345\270\210", 0));
        sBtn->setText(QApplication::translate("chooseType", "\345\255\246\347\224\237", 0));
        okBtn->setText(QApplication::translate("chooseType", "\347\241\256\345\256\232", 0));
        cancelBtn->setText(QApplication::translate("chooseType", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class chooseType: public Ui_chooseType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETYPE_H
