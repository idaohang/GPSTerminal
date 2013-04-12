#include "cgpsterminal.h"
#include <QApplication>
//-----------------------------------------
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CGPSTerminal *gpsterminal = new CGPSTerminal;
    gpsterminal->show();

    return a.exec();
}
