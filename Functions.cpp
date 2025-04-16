#include <cmath>
#include "Functions.h"

double f(double x) {
    return 0.1 * x * x - 5 * log(x) - 1;
}

double df(double x) {
    return 0.2 * x - 5 / x;
}
