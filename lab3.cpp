#include <iostream>
#include "Dychotomy_class.h"
#include "Newton_class.h"

int main() {
    Dychotomy_class* dyh = new Dychotomy_class();
    dyh->setInterval(0.5, 1);
    dyh->setTolerance(0.0001);
    std::cout << "Root (Dichotomy): " << dyh->solve() << std::endl;
    delete dyh;

    Newton_class* newton = new Newton_class();
    newton->setStart(0.7);
    newton->setTolerance(0.0001);
    std::cout << "Root (Newton): " << newton->solve() << std::endl;
    delete newton;

    return 0;
}
