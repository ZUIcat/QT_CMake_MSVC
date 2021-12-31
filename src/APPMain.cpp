#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[]) {
    int retCode = 0;
    std::cout << "== APP START ==" << std::endl;

    QApplication a(argc, argv);
    QLabel label(QLabel::tr("Hello Qt!"));
    label.show();

    std::cout << "== APP End (Exit Code: " << retCode << ") ==" << std::endl;
    return retCode;
}
