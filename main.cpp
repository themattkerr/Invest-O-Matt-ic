#include "griddisplay.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GridDisplay w;
    w.show();

    return a.exec();
}
