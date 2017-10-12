/********************************************************************************
** Form generated from reading UI file 'userappeal.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERAPPEAL_H
#define UI_USERAPPEAL_H

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

class Ui_UserAppeal
{
public:
    QLabel *label;
    QLabel *idLab;
    QLabel *nameLab;
    QLabel *classLab;
    QLabel *emailLab;
    QLineEdit *idlineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *classlineEdit;
    QLineEdit *emaillineEdit;
    QPushButton *pushBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *UserAppeal)
    {
        if (UserAppeal->objectName().isEmpty())
            UserAppeal->setObjectName(QStringLiteral("UserAppeal"));
        UserAppeal->resize(556, 357);
        label = new QLabel(UserAppeal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 341, 41));
        idLab = new QLabel(UserAppeal);
        idLab->setObjectName(QStringLiteral("idLab"));
        idLab->setGeometry(QRect(100, 120, 54, 12));
        nameLab = new QLabel(UserAppeal);
        nameLab->setObjectName(QStringLiteral("nameLab"));
        nameLab->setGeometry(QRect(100, 160, 54, 12));
        classLab = new QLabel(UserAppeal);
        classLab->setObjectName(QStringLiteral("classLab"));
        classLab->setGeometry(QRect(100, 200, 54, 12));
        emailLab = new QLabel(UserAppeal);
        emailLab->setObjectName(QStringLiteral("emailLab"));
        emailLab->setGeometry(QRect(100, 240, 54, 12));
        idlineEdit = new QLineEdit(UserAppeal);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(180, 120, 113, 20));
        namelineEdit = new QLineEdit(UserAppeal);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setGeometry(QRect(180, 160, 113, 20));
        classlineEdit = new QLineEdit(UserAppeal);
        classlineEdit->setObjectName(QStringLiteral("classlineEdit"));
        classlineEdit->setGeometry(QRect(180, 200, 113, 20));
        emaillineEdit = new QLineEdit(UserAppeal);
        emaillineEdit->setObjectName(QStringLiteral("emaillineEdit"));
        emaillineEdit->setGeometry(QRect(180, 240, 191, 20));
        pushBtn = new QPushButton(UserAppeal);
        pushBtn->setObjectName(QStringLiteral("pushBtn"));
        pushBtn->setGeometry(QRect(140, 290, 75, 23));
        cancelBtn = new QPushButton(UserAppeal);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(290, 290, 75, 23));

        retranslateUi(UserAppeal);
        QObject::connect(cancelBtn, SIGNAL(clicked()), UserAppeal, SLOT(close()));

        QMetaObject::connectSlotsByName(UserAppeal);
    } // setupUi

    void retranslateUi(QDialog *UserAppeal)
    {
        UserAppeal->setWindowTitle(QApplication::translate("UserAppeal", "UserAppeal", 0));
        label->setText(QApplication::translate("UserAppeal", "\350\257\267\346\217\220\344\272\244\346\202\250\347\232\204\344\270\252\344\272\272\350\264\246\345\217\267\344\277\241\346\201\257\357\274\214\346\210\221\344\273\254\345\260\206\344\274\232\345\234\250\344\270\211\344\270\252\345\267\245\344\275\234\346\227\245\345\206\205\347\273\231\346\202\250\345\233\236\345\244\215", 0));
        idLab->setText(QApplication::translate("UserAppeal", "\347\274\226\345\217\267\357\274\232", 0));
        nameLab->setText(QApplication::translate("UserAppeal", "\345\247\223\345\220\215\357\274\232", 0));
        classLab->setText(QApplication::translate("UserAppeal", "\347\217\255\347\272\247\357\274\232", 0));
        emailLab->setText(QApplication::translate("UserAppeal", "\351\202\256\347\256\261\357\274\232", 0));
        pushBtn->setText(QApplication::translate("UserAppeal", "\346\217\220\344\272\244", 0));
        cancelBtn->setText(QApplication::translate("UserAppeal", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class UserAppeal: public Ui_UserAppeal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERAPPEAL_H
