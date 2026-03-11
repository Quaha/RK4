#pragma once

#include <cmath>
#include <algorithm>

#include "solver.hpp"

double f1(double x, const vd& u);

double exact_f1(double x, double a, double u0);

double f2(double x, const vd& u);

double f3(double x, const vd& u);