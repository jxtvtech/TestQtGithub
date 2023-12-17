#include "TestQtGit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestQtGit w;
    w.show();
    return a.exec();
}
