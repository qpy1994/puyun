/********************************************************************************
** Form generated from reading UI file 'safequestion.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFEQUESTION_H
#define UI_SAFEQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_safeQuestion
{
public:
    QLabel *label;
    QComboBox *typeCombox;
    QLabel *typeLab;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QLabel *questionLab;
    QLabel *answerLab;
    QLineEdit *answerlineEdit;
    QLineEdit *questionlineEdit;
    QLineEdit *idlineEdit;
    QLabel *idLab;
    QPushButton *checkBtn;

    void setupUi(QDialog *safeQuestion)
    {
        if (safeQuestion->objectName().isEmpty())
            safeQuestion->setObjectName(QStringLiteral("safeQuestion"));
        safeQuestion->resize(583, 416);
        label = new QLabel(safeQuestion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 50, 191, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        typeCombox = new QComboBox(safeQuestion);
        typeCombox->setObjectName(QStringLiteral("typeCombox"));
        typeCombox->setGeometry(QRect(260, 120, 69, 22));
        typeLab = new QLabel(safeQuestion);
        typeLab->setObjectName(QStringLiteral("typeLab"));
        typeLab->setGeometry(QRect(170, 120, 81, 21));
        okBtn = new QPushButton(safeQuestion);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(170, 310, 75, 23));
        cancelBtn = new QPushButton(safeQuestion);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(310, 310, 75, 23));
        questionLab = new QLabel(safeQuestion);
        questionLab->setObjectName(QStringLiteral("questionLab"));
        questionLab->setGeometry(QRect(170, 200, 54, 12));
        answerLab = new QLabel(safeQuestion);
        answerLab->setObjectName(QStringLiteral("answerLab"));
        answerLab->setGeometry(QRect(170, 250, 54, 12));
        answerlineEdit = new QLineEdit(safeQuestion);
        answerlineEdit->setObjectName(QStringLiteral("answerlineEdit"));
        answerlineEdit->setGeometry(QRect(260, 250, 113, 20));
        questionlineEdit = new QLineEdit(safeQuestion);
        questionlineEdit->setObjectName(QStringLiteral("questionlineEdit"));
        questionlineEdit->setGeometry(QRect(260, 200, 113, 20));
        idlineEdit = new QLineEdit(safeQuestion);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(260, 160, 113, 20));
        idLab = new QLabel(safeQuestion);
        idLab->setObjectName(QStringLiteral("idLab"));
        idLab->setGeometry(QRect(170, 160, 61, 21));
        checkBtn = new QPushButton(safeQuestion);
        checkBtn->setObjectName(QStringLiteral("checkBtn"));
        checkBtn->setGeometry(QRect(420, 150, 51, 41));

        retranslateUi(safeQuestion);
        QObject::connect(cancelBtn, SIGNAL(clicked()), safeQuestion, SLOT(close()));

        QMetaObject::connectSlotsByName(safeQuestion);
    } // setupUi

    void retranslateUi(QDialog *safeQuestion)
    {
        safeQuestion->setWindowTitle(QApplication::translate("safeQuestion", "safeQuestion", 0));
        label->setText(QApplication::translate("safeQuestion", "<html><head/><body><p><span style=\" font-style:italic; color:#ff5500;\">\345\256\211 \345\205\250 \351\227\256 \351\242\230 \351\252\214 \350\257\201</span></p></body></html>", 0));
        typeCombox->clear();
        typeCombox->insertItems(0, QStringList()
         << QApplication::translate("safeQuestion", "\346\225\231\345\270\210", 0)
         << QApplication::translate("safeQuestion", "\345\255\246\347\224\237", 0)
        );
        typeLab->setText(QApplication::translate("safeQuestion", "\347\224\250\346\210\267\347\261\273\345\236\213\357\274\232", 0));
        okBtn->setText(QApplication::translate("safeQuestion", "\347\241\256\345\256\232", 0));
        cancelBtn->setText(QApplication::translate("safeQuestion", "\345\217\226\346\266\210", 0));
        questionLab->setText(QApplication::translate("safeQuestion", "\345\256\211\345\205\250\351\227\256\351\242\230\357\274\232", 0));
        answerLab->setText(QApplication::translate("safeQuestion", "\347\255\224   \346\241\210\357\274\232", 0));
        idLab->setText(QApplication::translate("safeQuestion", "\347\224\250\346\210\267\347\274\226\345\217\267\357\274\232", 0));
        checkBtn->setText(QApplication::translate("safeQuestion", "\351\252\214\350\257\201", 0));
    } // retranslateUi

};

namespace Ui {
    class safeQuestion: public Ui_safeQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFEQUESTION_H
