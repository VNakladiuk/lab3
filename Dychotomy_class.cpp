#include "Dychotomy_class.h"
#include "Functions.h"

Dychotomy_class::Dychotomy_class() {}
Dychotomy_class::~Dychotomy_class() {}

void Dychotomy_class::setInterval(double a_, double b_) {
    a = a_;
    b = b_;
}

void Dychotomy_class::setTolerance(double eps_) {
    eps = eps_;
}

double Dychotomy_class::solve() {
    double mid;
    while ((b - a) > eps) {
        mid = (a + b) / 2;
        if (f(a) * f(mid) < 0)
            b = mid;
        else
            a = mid;
    }
    return (a + b) / 2;
}
