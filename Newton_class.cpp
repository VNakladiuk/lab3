#include "Newton_class.h"
#include "Functions.h"
#include <cmath>

Newton_class::Newton_class() {}
Newton_class::~Newton_class() {}

void Newton_class::setStart(double x0_) {
    x0 = x0_;
}

void Newton_class::setTolerance(double eps_) {
    eps = eps_;
}

double Newton_class::solve() {
    double x = x0;
    while (fabs(f(x)) > eps) {
        x = x - f(x) / df(x);
    }
    return x;
}
