
#include "mainwindow.h"

#include "masterview.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;




    MasterView w;

    w.show();
    return a.exec();
}
