#include <QCoreApplication>
#include "apiresponse.h"

#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //std::string xx;
    //std::cin >> xx;
    //QString qss  = QString::fromStdString(xx);
    //std::cout << "you out: " << xx;
    //QString(xx.c_str())


    APIResponse api;
    //api.getRooms("wrpCode");


    //system("chcp 65001");


    return a.exec();
}
