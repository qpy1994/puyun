/********************************************************************************
** Form generated from reading UI file 'showlist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWLIST_H
#define UI_SHOWLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <mylineedit.h>

QT_BEGIN_NAMESPACE

class Ui_showList
{
public:
    myLineEdit *idlineEdit;
    QLabel *label;
    QLabel *idLab;
    QLabel *nameLab;
    myLineEdit *namelineEdit;
    QLabel *classLab;
    myLineEdit *classlineEdit;
    QLabel *ageLab;
    myLineEdit *agelineEdit;
    QLabel *sexLab;
    QComboBox *sexComboBox;
    QPushButton *editBtn;
    QPushButton *cancelBtn;
    QLabel *headLab;
    QLabel *picLab;
    QPushButton *DBBtn;
    QPushButton *teacherBtn;
    QLabel *subLab;
    myLineEdit *subEdit;

    void setupUi(QDialog *showList)
    {
        if (showList->objectName().isEmpty())
            showList->setObjectName(QStringLiteral("showList"));
        showList->resize(571, 405);
        idlineEdit = new myLineEdit(showList);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(70, 90, 113, 20));
        label = new QLabel(showList);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 20, 191, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        idLab = new QLabel(showList);
        idLab->setObjectName(QStringLiteral("idLab"));
        idLab->setGeometry(QRect(110, 70, 54, 12));
        nameLab = new QLabel(showList);
        nameLab->setObjectName(QStringLiteral("nameLab"));
        nameLab->setGeometry(QRect(310, 70, 54, 12));
        namelineEdit = new myLineEdit(showList);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setGeometry(QRect(270, 90, 113, 20));
        classLab = new QLabel(showList);
        classLab->setObjectName(QStringLiteral("classLab"));
        classLab->setGeometry(QRect(310, 180, 54, 12));
        classlineEdit = new myLineEdit(showList);
        classlineEdit->setObjectName(QStringLiteral("classlineEdit"));
        classlineEdit->setGeometry(QRect(270, 200, 113, 20));
        ageLab = new QLabel(showList);
        ageLab->setObjectName(QStringLiteral("ageLab"));
        ageLab->setGeometry(QRect(110, 180, 54, 12));
        agelineEdit = new myLineEdit(showList);
        agelineEdit->setObjectName(QStringLiteral("agelineEdit"));
        agelineEdit->setGeometry(QRect(70, 200, 113, 20));
        sexLab = new QLabel(showList);
        sexLab->setObjectName(QStringLiteral("sexLab"));
        sexLab->setGeometry(QRect(470, 180, 54, 12));
        sexComboBox = new QComboBox(showList);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setGeometry(QRect(458, 200, 51, 22));
        editBtn = new QPushButton(showList);
        editBtn->setObjectName(QStringLiteral("editBtn"));
        editBtn->setGeometry(QRect(170, 270, 71, 41));
        cancelBtn = new QPushButton(showList);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(320, 270, 71, 41));
        headLab = new QLabel(showList);
        headLab->setObjectName(QStringLiteral("headLab"));
        headLab->setGeometry(QRect(460, 10, 54, 12));
        picLab = new QLabel(showList);
        picLab->setObjectName(QStringLiteral("picLab"));
        picLab->setGeometry(QRect(440, 50, 81, 91));
        DBBtn = new QPushButton(showList);
        DBBtn->setObjectName(QStringLiteral("DBBtn"));
        DBBtn->setGeometry(QRect(240, 350, 81, 41));
        teacherBtn = new QPushButton(showList);
        teacherBtn->setObjectName(QStringLiteral("teacherBtn"));
        teacherBtn->setGeometry(QRect(240, 320, 81, 41));
        subLab = new QLabel(showList);
        subLab->setObjectName(QStringLiteral("subLab"));
        subLab->setGeometry(QRect(310, 180, 54, 12));
        subEdit = new myLineEdit(showList);
        subEdit->setObjectName(QStringLiteral("subEdit"));
        subEdit->setGeometry(QRect(270, 200, 113, 20));

        retranslateUi(showList);

        QMetaObject::connectSlotsByName(showList);
    } // setupUi

    void retranslateUi(QDialog *showList)
    {
        showList->setWindowTitle(QApplication::translate("showList", "showList", 0));
        label->setText(QApplication::translate("showList", "\344\270\252\344\272\272\344\277\241\346\201\257", 0));
        idLab->setText(QApplication::translate("showList", "\347\274\226\345\217\267", 0));
        nameLab->setText(QApplication::translate("showList", "\345\247\223\345\220\215", 0));
        classLab->setText(QApplication::translate("showList", "\347\217\255\347\272\247", 0));
        ageLab->setText(QApplication::translate("showList", "\345\271\264\351\276\204", 0));
        sexLab->setText(QApplication::translate("showList", "\346\200\247\345\210\253", 0));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("showList", "\345\245\263", 0)
         << QApplication::translate("showList", "\347\224\267", 0)
        );
        editBtn->setText(QApplication::translate("showList", "\347\274\226\350\276\221", 0));
        cancelBtn->setText(QApplication::translate("showList", "\345\205\263\351\227\255", 0));
        headLab->setText(QApplication::translate("showList", "\345\244\264\345\203\217", 0));
        picLab->setText(QString());
        DBBtn->setText(QApplication::translate("showList", "\346\225\260\346\215\256\345\272\223\347\256\241\347\220\206", 0));
        teacherBtn->setText(QApplication::translate("showList", "\344\273\273\350\257\276\346\225\231\345\270\210", 0));
        subLab->setText(QApplication::translate("showList", "\346\225\231\346\216\210\347\247\221\347\233\256", 0));
    } // retranslateUi

};

namespace Ui {
    class showList: public Ui_showList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWLIST_H
