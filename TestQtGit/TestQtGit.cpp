#include "TestQtGit.h"
#include "qdebug.h"

TestQtGit::TestQtGit(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	qDebug() << "dddd";

	int n;
	n = 10;

	qDebug() << "n is = " << n;

	

}

TestQtGit::~TestQtGit()
{}


void TestQtGit::mytextfun()
{
	QString str;
	
	int n;
	n = 10;
	str = QString::number(n);

}