#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "HelloWidget.h"

int main(int argc, char *argv[]) {
    int retCode = 0;
    std::cout << "== APP START ==" << std::endl;

    QApplication a(argc, argv);
    HelloWidget hw;
    hw.show();
    retCode = a.exec();

    std::cout << "== APP End (Exit Code: " << retCode << ") ==" << std::endl;
    return retCode;
}
