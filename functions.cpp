#include "functions.hpp"

double f1(double x, const vd& u) {
    return -10.5 * u[0];
}

double exact_f1(double x, double a, double u0) {
    return u0 * std::exp(-10.5 * (x - a));
}