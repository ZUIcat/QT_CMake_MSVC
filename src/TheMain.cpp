#include "TheMain.h"

#include <iostream>
#include <vector>
#include <string>

#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[]) {
    std::cout << "--Start--" << std::endl;
    QApplication a(argc, argv);
    QLabel label(QLabel::tr("Hello Qt!"));
    label.show();

    int retCode = a.exec();
    std::cout << "--End--" << std::endl;
    return retCode;
}
