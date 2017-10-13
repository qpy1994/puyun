/********************************************************************************
** Form generated from reading UI file 'changepwd.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPWD_H
#define UI_CHANGEPWD_H

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

class Ui_changePwd
{
public:
    QLabel *pwdLab;
    QLabel *idLab;
    QLineEdit *pwdlineEdit;
    QLabel *checkPwdLab;
    QLineEdit *idlineEdit;
    QLineEdit *checkpwdlineEdit;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *changePwd)
    {
        if (changePwd->objectName().isEmpty())
            changePwd->setObjectName(QStringLiteral("changePwd"));
        changePwd->resize(483, 366);
        pwdLab = new QLabel(changePwd);
        pwdLab->setObjectName(QStringLiteral("pwdLab"));
        pwdLab->setGeometry(QRect(140, 140, 54, 12));
        idLab = new QLabel(changePwd);
        idLab->setObjectName(QStringLiteral("idLab"));
        idLab->setGeometry(QRect(140, 100, 54, 12));
        pwdlineEdit = new QLineEdit(changePwd);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(220, 140, 113, 20));
        checkPwdLab = new QLabel(changePwd);
        checkPwdLab->setObjectName(QStringLiteral("checkPwdLab"));
        checkPwdLab->setGeometry(QRect(140, 180, 54, 12));
        idlineEdit = new QLineEdit(changePwd);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(220, 100, 113, 20));
        checkpwdlineEdit = new QLineEdit(changePwd);
        checkpwdlineEdit->setObjectName(QStringLiteral("checkpwdlineEdit"));
        checkpwdlineEdit->setGeometry(QRect(220, 180, 113, 20));
        okBtn = new QPushButton(changePwd);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(140, 250, 75, 23));
        cancelBtn = new QPushButton(changePwd);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(280, 250, 75, 23));

        retranslateUi(changePwd);
        QObject::connect(cancelBtn, SIGNAL(clicked()), changePwd, SLOT(close()));

        QMetaObject::connectSlotsByName(changePwd);
    } // setupUi

    void retranslateUi(QDialog *changePwd)
    {
        changePwd->setWindowTitle(QApplication::translate("changePwd", "changePwd", 0));
        pwdLab->setText(QApplication::translate("changePwd", "\345\257\206   \347\240\201\357\274\232", 0));
        idLab->setText(QApplication::translate("changePwd", "\347\274\226   \345\217\267\357\274\232", 0));
        checkPwdLab->setText(QApplication::translate("changePwd", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        okBtn->setText(QApplication::translate("changePwd", "\347\241\256\350\256\244", 0));
        cancelBtn->setText(QApplication::translate("changePwd", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class changePwd: public Ui_changePwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPWD_H
