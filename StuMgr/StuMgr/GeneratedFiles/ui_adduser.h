/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

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

class Ui_addUser
{
public:
    QLabel *nameLab;
    QLineEdit *classlineEdit;
    QLabel *ageLab;
    QComboBox *sexComboBox;
    QLineEdit *namelineEdit;
    QLineEdit *idlineEdit;
    QLabel *classLab;
    QLineEdit *agelineEdit;
    QPushButton *editBtn;
    QLabel *idLab;
    QLabel *label;
    QLabel *sexLab;
    QPushButton *cancelBtn;
    QLabel *pwdLab;
    QLineEdit *pwdEdit;
    QLabel *subjectLab;
    QLineEdit *subjectLineEdit;
    QLabel *tidLab;
    QLineEdit *tidEdit;

    void setupUi(QDialog *addUser)
    {
        if (addUser->objectName().isEmpty())
            addUser->setObjectName(QStringLiteral("addUser"));
        addUser->resize(624, 425);
        nameLab = new QLabel(addUser);
        nameLab->setObjectName(QStringLiteral("nameLab"));
        nameLab->setGeometry(QRect(260, 110, 54, 12));
        classlineEdit = new QLineEdit(addUser);
        classlineEdit->setObjectName(QStringLiteral("classlineEdit"));
        classlineEdit->setGeometry(QRect(220, 240, 113, 20));
        ageLab = new QLabel(addUser);
        ageLab->setObjectName(QStringLiteral("ageLab"));
        ageLab->setGeometry(QRect(80, 220, 54, 12));
        sexComboBox = new QComboBox(addUser);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setGeometry(QRect(558, 240, 51, 22));
        namelineEdit = new QLineEdit(addUser);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setGeometry(QRect(220, 130, 113, 20));
        idlineEdit = new QLineEdit(addUser);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(40, 130, 113, 20));
        classLab = new QLabel(addUser);
        classLab->setObjectName(QStringLiteral("classLab"));
        classLab->setGeometry(QRect(260, 220, 54, 12));
        agelineEdit = new QLineEdit(addUser);
        agelineEdit->setObjectName(QStringLiteral("agelineEdit"));
        agelineEdit->setGeometry(QRect(40, 240, 113, 20));
        editBtn = new QPushButton(addUser);
        editBtn->setObjectName(QStringLiteral("editBtn"));
        editBtn->setGeometry(QRect(220, 310, 71, 41));
        idLab = new QLabel(addUser);
        idLab->setObjectName(QStringLiteral("idLab"));
        idLab->setGeometry(QRect(80, 110, 54, 12));
        label = new QLabel(addUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 60, 191, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        sexLab = new QLabel(addUser);
        sexLab->setObjectName(QStringLiteral("sexLab"));
        sexLab->setGeometry(QRect(570, 220, 54, 12));
        cancelBtn = new QPushButton(addUser);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(370, 310, 71, 41));
        pwdLab = new QLabel(addUser);
        pwdLab->setObjectName(QStringLiteral("pwdLab"));
        pwdLab->setGeometry(QRect(440, 110, 54, 12));
        pwdEdit = new QLineEdit(addUser);
        pwdEdit->setObjectName(QStringLiteral("pwdEdit"));
        pwdEdit->setGeometry(QRect(400, 130, 113, 20));
        subjectLab = new QLabel(addUser);
        subjectLab->setObjectName(QStringLiteral("subjectLab"));
        subjectLab->setGeometry(QRect(260, 220, 54, 12));
        subjectLineEdit = new QLineEdit(addUser);
        subjectLineEdit->setObjectName(QStringLiteral("subjectLineEdit"));
        subjectLineEdit->setGeometry(QRect(220, 240, 113, 20));
        tidLab = new QLabel(addUser);
        tidLab->setObjectName(QStringLiteral("tidLab"));
        tidLab->setGeometry(QRect(430, 210, 71, 21));
        tidEdit = new QLineEdit(addUser);
        tidEdit->setObjectName(QStringLiteral("tidEdit"));
        tidEdit->setGeometry(QRect(400, 240, 113, 20));

        retranslateUi(addUser);

        QMetaObject::connectSlotsByName(addUser);
    } // setupUi

    void retranslateUi(QDialog *addUser)
    {
        addUser->setWindowTitle(QApplication::translate("addUser", "addUser", 0));
        nameLab->setText(QApplication::translate("addUser", "\345\247\223\345\220\215", 0));
        ageLab->setText(QApplication::translate("addUser", "\345\271\264\351\276\204", 0));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("addUser", "\347\224\267", 0)
         << QApplication::translate("addUser", "\345\245\263", 0)
        );
        classLab->setText(QApplication::translate("addUser", "\347\217\255\347\272\247", 0));
        editBtn->setText(QApplication::translate("addUser", "\346\267\273\345\212\240", 0));
        idLab->setText(QApplication::translate("addUser", "\347\274\226\345\217\267", 0));
        label->setText(QApplication::translate("addUser", "\344\270\252\344\272\272\344\277\241\346\201\257", 0));
        sexLab->setText(QApplication::translate("addUser", "\346\200\247\345\210\253", 0));
        cancelBtn->setText(QApplication::translate("addUser", "\345\205\263\351\227\255", 0));
        pwdLab->setText(QApplication::translate("addUser", "\345\257\206\347\240\201", 0));
        subjectLab->setText(QApplication::translate("addUser", "\346\225\231\346\216\210\347\247\221\347\233\256", 0));
        tidLab->setText(QApplication::translate("addUser", "\346\225\231\345\270\210\347\274\226\345\217\267", 0));
    } // retranslateUi

};

namespace Ui {
    class addUser: public Ui_addUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
