#include "functions.hpp"

double f1(double x, const vd& u) {
    return -10.5 * u[0];
}

double exact_f1(double x, double a, double u0) {
    return u0 * std::exp(-10.5 * (x - a));
}

double f2(double x, const vd& u) {
    return u[1];
}

double f3(double x, const vd& u) {
    // «ахардкоженные параметры уравнени€
    const double m = 0.01;
    const double c = 0.15;
    const double k = 2.0;
    const double k_star = 2.0;

    return -(c * u[1] + k * u[0] + k_star * u[0] * u[0] * u[0]) / m;
}