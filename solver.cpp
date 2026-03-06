#include "solver.hpp"

namespace RK4 {

	std::pair<double, vd> RK4(const std::pair<double, vd>& point, const vf& F, double h, double b, double EPS_b) {

		double x = point.first;
		const vd& V = point.second;

		int m = V.size();

		if (x + h >= b) {
			h = b - EPS_b / 2.0 - x;
		}
		double x_next = x + h; // xi < b

		vvd K(5, vd(m, 0.0));
		vd step{ 0.0, 0.0, h / 2.0, h / 2.0, h };

		for (int d = 1; d <= 4; d++) {
			vd V_temp = V;
			for (int j = 0; j < m; j++) {
				V_temp[j] += step[d] * K[d - 1][j];
			}
			for (int j = 0; j < m; j++) {
				K[d][j] = F[j](x + step[d], V_temp);
			}
		}

		vd V_next(m, 0.0);
		for (int j = 0; j < m; j++) {
			V_next[j] = V[j] + h / 6.0 * (K[1][j] + 2.0 * K[2][j] + 2.0 * K[3][j] + K[4][j]);
		}

		return std::make_pair(x_next, V_next);
	}

	std::pair<double, vd> RK4(const std::pair<double, vd>& point, const vf& F, double& h, double b, double EPS_b, double EPS, int& C1, int& C2, int& cnt_of_iterations, int max_iterations, vd& v2) {

		cnt_of_iterations++;

		double x = point.first;
		const vd& V = point.second;

		int m = V.size();

		if (x + h >= b) {
			h = b - EPS_b / 2.0 - x;
		}

		std::pair<double, vd> p1 = RK4(point, F, h, b, EPS_b);
		std::pair<double, vd> p2 = RK4(RK4(point, F, h / 2.0, b, EPS_b), F, h / 2.0, b, EPS_b);

		if (cnt_of_iterations >= max_iterations) {
			v2 = p2.second;
			return p1;
		}

		vd S_abs(m, 0.0);
		for (int j = 0; j < m; j++) {
			S_abs[j] = std::abs(p2.second[j] - p1.second[j]) / 15.0;
		}

		bool any_bad = false;
		bool all_over = true;
		for (int j = 0; j < m; j++) {
			if (S_abs[j] > EPS) {
				any_bad = true;
			}
			if (S_abs[j] >= EPS / 32.0) {
				all_over = false;
			}
		}

		if (any_bad) {
			h /= 2.0;
			C1++;
			return RK4(point, F, h, b, EPS_b, EPS, C1, C2, cnt_of_iterations, max_iterations, v2);
		}

		if (all_over) {
			h *= 2.0;
			C2++;
		}

		v2 = p2.second;

		return p1;
	}
};