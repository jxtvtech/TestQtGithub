/********************************************************************************
** Form generated from reading UI file 'TestQtGit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQTGIT_H
#define UI_TESTQTGIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestQtGitClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestQtGitClass)
    {
        if (TestQtGitClass->objectName().isEmpty())
            TestQtGitClass->setObjectName(QString::fromUtf8("TestQtGitClass"));
        TestQtGitClass->resize(600, 400);
        menuBar = new QMenuBar(TestQtGitClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TestQtGitClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestQtGitClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TestQtGitClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TestQtGitClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TestQtGitClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TestQtGitClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TestQtGitClass->setStatusBar(statusBar);

        retranslateUi(TestQtGitClass);

        QMetaObject::connectSlotsByName(TestQtGitClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestQtGitClass)
    {
        TestQtGitClass->setWindowTitle(QApplication::translate("TestQtGitClass", "TestQtGit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestQtGitClass: public Ui_TestQtGitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQTGIT_H
