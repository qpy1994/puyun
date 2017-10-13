/********************************************************************************
** Form generated from reading UI file 'dbmaneger.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBMANEGER_H
#define UI_DBMANEGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <mylineedit.h>

QT_BEGIN_NAMESPACE

class Ui_dbManeger
{
public:
    QLabel *idlab;
    myLineEdit *idedit;
    QLabel *namelab;
    myLineEdit *nameedit;
    QLabel *classlab;
    myLineEdit *classedit;
    QPushButton *blursearch;
    QPushButton *exactsearch;
    QLabel *teacherlab;
    myLineEdit *teacheredit;
    QPushButton *showbtn;
    QPushButton *closebtn;
    QTableWidget *tableWidget;
    QPushButton *delBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *dbManeger)
    {
        if (dbManeger->objectName().isEmpty())
            dbManeger->setObjectName(QStringLiteral("dbManeger"));
        dbManeger->resize(627, 490);
        idlab = new QLabel(dbManeger);
        idlab->setObjectName(QStringLiteral("idlab"));
        idlab->setGeometry(QRect(80, 50, 54, 12));
        idedit = new myLineEdit(dbManeger);
        idedit->setObjectName(QStringLiteral("idedit"));
        idedit->setGeometry(QRect(50, 70, 91, 20));
        namelab = new QLabel(dbManeger);
        namelab->setObjectName(QStringLiteral("namelab"));
        namelab->setGeometry(QRect(250, 50, 54, 12));
        nameedit = new myLineEdit(dbManeger);
        nameedit->setObjectName(QStringLiteral("nameedit"));
        nameedit->setGeometry(QRect(220, 70, 91, 20));
        classlab = new QLabel(dbManeger);
        classlab->setObjectName(QStringLiteral("classlab"));
        classlab->setGeometry(QRect(80, 100, 54, 12));
        classedit = new myLineEdit(dbManeger);
        classedit->setObjectName(QStringLiteral("classedit"));
        classedit->setGeometry(QRect(50, 120, 91, 20));
        blursearch = new QPushButton(dbManeger);
        blursearch->setObjectName(QStringLiteral("blursearch"));
        blursearch->setGeometry(QRect(390, 70, 75, 23));
        exactsearch = new QPushButton(dbManeger);
        exactsearch->setObjectName(QStringLiteral("exactsearch"));
        exactsearch->setGeometry(QRect(390, 110, 75, 23));
        teacherlab = new QLabel(dbManeger);
        teacherlab->setObjectName(QStringLiteral("teacherlab"));
        teacherlab->setGeometry(QRect(240, 100, 71, 20));
        teacheredit = new myLineEdit(dbManeger);
        teacheredit->setObjectName(QStringLiteral("teacheredit"));
        teacheredit->setGeometry(QRect(220, 120, 91, 20));
        showbtn = new QPushButton(dbManeger);
        showbtn->setObjectName(QStringLiteral("showbtn"));
        showbtn->setGeometry(QRect(510, 70, 75, 23));
        closebtn = new QPushButton(dbManeger);
        closebtn->setObjectName(QStringLiteral("closebtn"));
        closebtn->setGeometry(QRect(510, 110, 75, 23));
        tableWidget = new QTableWidget(dbManeger);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 180, 591, 241));
        delBtn = new QPushButton(dbManeger);
        delBtn->setObjectName(QStringLiteral("delBtn"));
        delBtn->setGeometry(QRect(210, 430, 71, 41));
        cancelBtn = new QPushButton(dbManeger);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(330, 430, 71, 41));

        retranslateUi(dbManeger);
        QObject::connect(closebtn, SIGNAL(clicked()), dbManeger, SLOT(close()));

        QMetaObject::connectSlotsByName(dbManeger);
    } // setupUi

    void retranslateUi(QDialog *dbManeger)
    {
        dbManeger->setWindowTitle(QApplication::translate("dbManeger", "dbManeger", 0));
        idlab->setText(QApplication::translate("dbManeger", "\345\255\246\345\217\267", 0));
        namelab->setText(QApplication::translate("dbManeger", "\345\247\223\345\220\215", 0));
        classlab->setText(QApplication::translate("dbManeger", "\347\217\255\347\272\247", 0));
        blursearch->setText(QApplication::translate("dbManeger", "\346\250\241\347\263\212\346\220\234\347\264\242", 0));
        exactsearch->setText(QApplication::translate("dbManeger", "\347\262\276\347\241\256\346\220\234\347\264\242", 0));
        teacherlab->setText(QApplication::translate("dbManeger", "\346\225\231\345\270\210\347\274\226\345\217\267", 0));
        showbtn->setText(QApplication::translate("dbManeger", "\346\237\245\347\234\213\345\205\250\351\203\250", 0));
        closebtn->setText(QApplication::translate("dbManeger", "\345\205\263\351\227\255\347\252\227\345\217\243", 0));
        delBtn->setText(QApplication::translate("dbManeger", "\345\210\240\351\231\244", 0));
        cancelBtn->setText(QApplication::translate("dbManeger", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class dbManeger: public Ui_dbManeger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBMANEGER_H
