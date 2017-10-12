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
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_forgetPwd
{
public:
    QLabel *label;
    myLabel *AppealLab;
    myLabel *safeLabel;

    void setupUi(QDialog *forgetPwd)
    {
        if (forgetPwd->objectName().isEmpty())
            forgetPwd->setObjectName(QStringLiteral("forgetPwd"));
        forgetPwd->resize(509, 366);
        label = new QLabel(forgetPwd);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 50, 191, 41));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        AppealLab = new myLabel(forgetPwd);
        AppealLab->setObjectName(QStringLiteral("AppealLab"));
        AppealLab->setGeometry(QRect(160, 120, 151, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        AppealLab->setFont(font1);
        safeLabel = new myLabel(forgetPwd);
        safeLabel->setObjectName(QStringLiteral("safeLabel"));
        safeLabel->setGeometry(QRect(160, 180, 151, 31));
        safeLabel->setFont(font1);

        retranslateUi(forgetPwd);

        QMetaObject::connectSlotsByName(forgetPwd);
    } // setupUi

    void retranslateUi(QDialog *forgetPwd)
    {
        forgetPwd->setWindowTitle(QApplication::translate("forgetPwd", "forgetPwd", 0));
        label->setText(QApplication::translate("forgetPwd", "\350\257\267\351\200\211\346\213\251\346\211\276\345\233\236\345\257\206\347\240\201\347\232\204\351\200\224\345\276\204\357\274\232", 0));
        AppealLab->setText(QApplication::translate("forgetPwd", "<html><head/><body><p><span style=\" font-style:italic; color:#00aaff;\">1.\350\201\224\347\263\273\347\256\241\347\220\206\345\221\230/\347\224\263\350\257\211</span></p></body></html>", 0));
        safeLabel->setText(QApplication::translate("forgetPwd", "<html><head/><body><p><span style=\" font-style:italic; color:#00aaff;\">2.\351\252\214\350\257\201\345\257\206\344\277\235\351\227\256\351\242\230</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class forgetPwd: public Ui_forgetPwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPWD_H
