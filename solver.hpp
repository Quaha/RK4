#pragma once

#include <utility>
#include <vector>
#include <functional>
#include <stdexcept>
#include <cmath>
#include <algorithm>

using vd = std::vector<double>;
using vvd = std::vector<vd>;

using ftype = std::function<double(double, const vd&)>;
using vf = std::vector<ftype>;

namespace RK4 {
	std::pair<double, vd> RK4(const std::pair<double, vd>& point, const vf& F, double h, double b, double EPS_b);
	std::pair<double, vd> RK4(const std::pair<double, vd>& point, const vf& F, double& h, double b, double EPS_b, double EPS, int& C1, int& C2, int& cnt_of_iterations, int max_iterations);
};