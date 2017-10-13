/********************************************************************************
** Form generated from reading UI file 'showteacher.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTEACHER_H
#define UI_SHOWTEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_showTeacher
{
public:
    QPushButton *exitBtn;
    QLabel *label;
    QLabel *idLab;
    QLabel *idEdit;
    QLabel *nameLab;
    QLabel *nameEdit;
    QLabel *ageLab;
    QLabel *ageEdit;
    QLabel *subLab;
    QLabel *subEdit;
    QLabel *picLab;
    QLabel *sexLab;
    QComboBox *comboBox;

    void setupUi(QDialog *showTeacher)
    {
        if (showTeacher->objectName().isEmpty())
            showTeacher->setObjectName(QStringLiteral("showTeacher"));
        showTeacher->resize(566, 439);
        exitBtn = new QPushButton(showTeacher);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(220, 320, 121, 51));
        QFont font;
        font.setPointSize(16);
        exitBtn->setFont(font);
        label = new QLabel(showTeacher);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 20, 151, 41));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        idLab = new QLabel(showTeacher);
        idLab->setObjectName(QStringLiteral("idLab"));
        idLab->setGeometry(QRect(60, 80, 54, 21));
        QFont font2;
        font2.setPointSize(12);
        idLab->setFont(font2);
        idEdit = new QLabel(showTeacher);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setGeometry(QRect(160, 80, 81, 21));
        idEdit->setFont(font2);
        nameLab = new QLabel(showTeacher);
        nameLab->setObjectName(QStringLiteral("nameLab"));
        nameLab->setGeometry(QRect(60, 130, 54, 21));
        nameLab->setFont(font2);
        nameEdit = new QLabel(showTeacher);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(160, 130, 81, 21));
        nameEdit->setFont(font2);
        ageLab = new QLabel(showTeacher);
        ageLab->setObjectName(QStringLiteral("ageLab"));
        ageLab->setGeometry(QRect(60, 180, 54, 21));
        ageLab->setFont(font2);
        ageEdit = new QLabel(showTeacher);
        ageEdit->setObjectName(QStringLiteral("ageEdit"));
        ageEdit->setGeometry(QRect(160, 180, 81, 21));
        ageEdit->setFont(font2);
        subLab = new QLabel(showTeacher);
        subLab->setObjectName(QStringLiteral("subLab"));
        subLab->setGeometry(QRect(60, 230, 81, 21));
        subLab->setFont(font2);
        subEdit = new QLabel(showTeacher);
        subEdit->setObjectName(QStringLiteral("subEdit"));
        subEdit->setGeometry(QRect(160, 230, 81, 21));
        subEdit->setFont(font2);
        picLab = new QLabel(showTeacher);
        picLab->setObjectName(QStringLiteral("picLab"));
        picLab->setGeometry(QRect(410, 60, 71, 91));
        sexLab = new QLabel(showTeacher);
        sexLab->setObjectName(QStringLiteral("sexLab"));
        sexLab->setGeometry(QRect(410, 190, 54, 21));
        sexLab->setFont(font2);
        comboBox = new QComboBox(showTeacher);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(410, 230, 51, 31));

        retranslateUi(showTeacher);
        QObject::connect(exitBtn, SIGNAL(clicked()), showTeacher, SLOT(close()));

        QMetaObject::connectSlotsByName(showTeacher);
    } // setupUi

    void retranslateUi(QDialog *showTeacher)
    {
        showTeacher->setWindowTitle(QApplication::translate("showTeacher", "showTeacher", 0));
        exitBtn->setText(QApplication::translate("showTeacher", "\351\200\200  \345\207\272", 0));
        label->setText(QApplication::translate("showTeacher", "   \344\273\273\350\257\276\346\225\231\345\270\210\344\277\241\346\201\257", 0));
        idLab->setText(QApplication::translate("showTeacher", "\347\274\226\345\217\267\357\274\232", 0));
        idEdit->setText(QApplication::translate("showTeacher", "TextLabel", 0));
        nameLab->setText(QApplication::translate("showTeacher", "\345\247\223\345\220\215\357\274\232", 0));
        nameEdit->setText(QApplication::translate("showTeacher", "TextLabel", 0));
        ageLab->setText(QApplication::translate("showTeacher", "\345\271\264\351\276\204\357\274\232", 0));
        ageEdit->setText(QApplication::translate("showTeacher", "TextLabel", 0));
        subLab->setText(QApplication::translate("showTeacher", "\346\225\231\346\216\210\347\247\221\347\233\256\357\274\232", 0));
        subEdit->setText(QApplication::translate("showTeacher", "TextLabel", 0));
        picLab->setText(QApplication::translate("showTeacher", "TextLabel", 0));
        sexLab->setText(QApplication::translate("showTeacher", "\346\200\247\345\210\253\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("showTeacher", "\345\245\263", 0)
         << QApplication::translate("showTeacher", "\347\224\267", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class showTeacher: public Ui_showTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTEACHER_H
