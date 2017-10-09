/********************************************************************************
** Form generated from reading UI file 'stumgr.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUMGR_H
#define UI_STUMGR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_StuMgrClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *unameLab;
    QLineEdit *unameEdit;
    QLabel *pwdLab;
    QLineEdit *pwdEdit;
    QPushButton *loginBtn;
    QPushButton *cancelBtn;
    QRadioButton *teacherradioButton;
    QRadioButton *sturadioButton;
    myLabel *forgetPwdLab;
    myLabel *createStuLab;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StuMgrClass)
    {
        if (StuMgrClass->objectName().isEmpty())
            StuMgrClass->setObjectName(QStringLiteral("StuMgrClass"));
        StuMgrClass->resize(600, 400);
        centralWidget = new QWidget(StuMgrClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 50, 221, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(15);
        label->setFont(font);
        unameLab = new QLabel(centralWidget);
        unameLab->setObjectName(QStringLiteral("unameLab"));
        unameLab->setGeometry(QRect(160, 130, 71, 21));
        QFont font1;
        font1.setPointSize(12);
        unameLab->setFont(font1);
        unameEdit = new QLineEdit(centralWidget);
        unameEdit->setObjectName(QStringLiteral("unameEdit"));
        unameEdit->setGeometry(QRect(260, 130, 151, 21));
        pwdLab = new QLabel(centralWidget);
        pwdLab->setObjectName(QStringLiteral("pwdLab"));
        pwdLab->setGeometry(QRect(160, 190, 71, 21));
        pwdLab->setFont(font1);
        pwdEdit = new QLineEdit(centralWidget);
        pwdEdit->setObjectName(QStringLiteral("pwdEdit"));
        pwdEdit->setGeometry(QRect(260, 190, 151, 21));
        loginBtn = new QPushButton(centralWidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(210, 280, 81, 41));
        cancelBtn = new QPushButton(centralWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(350, 280, 81, 41));
        teacherradioButton = new QRadioButton(centralWidget);
        teacherradioButton->setObjectName(QStringLiteral("teacherradioButton"));
        teacherradioButton->setGeometry(QRect(270, 240, 89, 16));
        sturadioButton = new QRadioButton(centralWidget);
        sturadioButton->setObjectName(QStringLiteral("sturadioButton"));
        sturadioButton->setGeometry(QRect(350, 240, 89, 16));
        forgetPwdLab = new myLabel(centralWidget);
        forgetPwdLab->setObjectName(QStringLiteral("forgetPwdLab"));
        forgetPwdLab->setGeometry(QRect(430, 130, 61, 16));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 85, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(51, 153, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        forgetPwdLab->setPalette(palette);
        QFont font2;
        font2.setPointSize(8);
        font2.setItalic(true);
        forgetPwdLab->setFont(font2);
        forgetPwdLab->setCursor(QCursor(Qt::PointingHandCursor));
        createStuLab = new myLabel(centralWidget);
        createStuLab->setObjectName(QStringLiteral("createStuLab"));
        createStuLab->setGeometry(QRect(430, 190, 51, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        createStuLab->setPalette(palette1);
        createStuLab->setFont(font2);
        createStuLab->setCursor(QCursor(Qt::PointingHandCursor));
        StuMgrClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(StuMgrClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        StuMgrClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StuMgrClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        StuMgrClass->setStatusBar(statusBar);

        retranslateUi(StuMgrClass);
        QObject::connect(cancelBtn, SIGNAL(clicked()), StuMgrClass, SLOT(close()));

        QMetaObject::connectSlotsByName(StuMgrClass);
    } // setupUi

    void retranslateUi(QMainWindow *StuMgrClass)
    {
        StuMgrClass->setWindowTitle(QApplication::translate("StuMgrClass", "StuMgr", 0));
        label->setText(QApplication::translate("StuMgrClass", "\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201", 0));
        unameLab->setText(QApplication::translate("StuMgrClass", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        pwdLab->setText(QApplication::translate("StuMgrClass", "\345\257\206  \347\240\201\357\274\232", 0));
        pwdEdit->setText(QString());
        loginBtn->setText(QApplication::translate("StuMgrClass", "\347\231\273\345\275\225", 0));
        cancelBtn->setText(QApplication::translate("StuMgrClass", "\345\217\226\346\266\210", 0));
        teacherradioButton->setText(QApplication::translate("StuMgrClass", "\350\200\201\345\270\210", 0));
        sturadioButton->setText(QApplication::translate("StuMgrClass", "\345\255\246\347\224\237", 0));
        forgetPwdLab->setText(QApplication::translate("StuMgrClass", "<html><head/><body><p><span style=\" color:#0000ff;\">\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237</span></p></body></html>", 0));
        createStuLab->setText(QApplication::translate("StuMgrClass", "<html><head/><body><p><span style=\" color:#0000ff;\">\346\263\250\345\206\214\347\224\250\346\210\267</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class StuMgrClass: public Ui_StuMgrClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUMGR_H
