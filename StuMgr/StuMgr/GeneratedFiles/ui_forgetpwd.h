/********************************************************************************
** Form generated from reading UI file 'forgetpwd.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPWD_H
#define UI_FORGETPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_forgetPwd
{
public:
    QLabel *questionLab;
    QLineEdit *answerEdit;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QLabel *idlabel;
    QLineEdit *idlineEdit;
    QLabel *pwdLab;
    QLineEdit *pwdlineEdit;
    QLabel *pwdLab2;
    QLineEdit *pwdlineEdit2;

    void setupUi(QDialog *forgetPwd)
    {
        if (forgetPwd->objectName().isEmpty())
            forgetPwd->setObjectName(QStringLiteral("forgetPwd"));
        forgetPwd->resize(509, 366);
        questionLab = new QLabel(forgetPwd);
        questionLab->setObjectName(QStringLiteral("questionLab"));
        questionLab->setGeometry(QRect(120, 80, 301, 61));
        answerEdit = new QLineEdit(forgetPwd);
        answerEdit->setObjectName(QStringLiteral("answerEdit"));
        answerEdit->setGeometry(QRect(130, 150, 231, 41));
        okBtn = new QPushButton(forgetPwd);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(140, 230, 91, 41));
        cancelBtn = new QPushButton(forgetPwd);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(260, 230, 91, 41));
        idlabel = new QLabel(forgetPwd);
        idlabel->setObjectName(QStringLiteral("idlabel"));
        idlabel->setGeometry(QRect(140, 80, 61, 21));
        idlineEdit = new QLineEdit(forgetPwd);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(202, 80, 141, 20));
        pwdLab = new QLabel(forgetPwd);
        pwdLab->setObjectName(QStringLiteral("pwdLab"));
        pwdLab->setGeometry(QRect(138, 130, 61, 21));
        pwdlineEdit = new QLineEdit(forgetPwd);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(200, 130, 141, 20));
        pwdLab2 = new QLabel(forgetPwd);
        pwdLab2->setObjectName(QStringLiteral("pwdLab2"));
        pwdLab2->setGeometry(QRect(138, 170, 61, 21));
        pwdlineEdit2 = new QLineEdit(forgetPwd);
        pwdlineEdit2->setObjectName(QStringLiteral("pwdlineEdit2"));
        pwdlineEdit2->setGeometry(QRect(200, 170, 141, 20));
        answerEdit->raise();
        cancelBtn->raise();
        okBtn->raise();
        questionLab->raise();
        idlabel->raise();
        idlineEdit->raise();
        pwdLab->raise();
        pwdlineEdit->raise();
        pwdLab2->raise();
        pwdlineEdit2->raise();

        retranslateUi(forgetPwd);
        QObject::connect(cancelBtn, SIGNAL(clicked()), forgetPwd, SLOT(close()));

        QMetaObject::connectSlotsByName(forgetPwd);
    } // setupUi

    void retranslateUi(QDialog *forgetPwd)
    {
        forgetPwd->setWindowTitle(QApplication::translate("forgetPwd", "forgetPwd", 0));
        questionLab->setText(QApplication::translate("forgetPwd", "\350\257\267\345\233\236\347\255\224\345\257\206\344\277\235\351\227\256\351\242\230\357\274\214\346\235\245\347\241\256\350\256\244\350\272\253\344\273\275\357\274\214\351\207\215\347\275\256\345\257\206\347\240\201\357\274\232\n"
"\346\234\254\350\275\257\344\273\266\347\232\204\344\275\234\350\200\205\346\230\257\350\260\201\357\274\237", 0));
        okBtn->setText(QApplication::translate("forgetPwd", "\347\241\256\350\256\244", 0));
        cancelBtn->setText(QApplication::translate("forgetPwd", "\345\217\226\346\266\210", 0));
        idlabel->setText(QApplication::translate("forgetPwd", "\347\224\250\346\210\267\347\274\226\345\217\267\357\274\232", 0));
        pwdLab->setText(QApplication::translate("forgetPwd", "\345\257\206    \347\240\201\357\274\232", 0));
        pwdLab2->setText(QApplication::translate("forgetPwd", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class forgetPwd: public Ui_forgetPwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPWD_H
