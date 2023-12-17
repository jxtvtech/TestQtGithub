#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TestQtGit.h"

class TestQtGit : public QMainWindow
{
    Q_OBJECT

public:
    TestQtGit(QWidget *parent = nullptr);
    ~TestQtGit();

	void mytextfun();

private:
    Ui::TestQtGitClass ui;
};
