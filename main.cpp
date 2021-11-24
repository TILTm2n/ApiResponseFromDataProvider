#include <QCoreApplication>
#include "apiresponse.h"

#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::string xx;
    std::cin >> xx;
    //QString qss  = QString::fromStdString(xx);
    //APIResponse api;

    std::cout << "you out: " << xx;
    //api.getRooms("wrpCode");//QString(xx.c_str())

    return a.exec();
}
