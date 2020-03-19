#include <QApplication>
#include "aquarium.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Aquarium w;
    w.show();

    return a.exec();
}
