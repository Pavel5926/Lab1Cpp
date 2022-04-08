#include "Equation.h"
const double eps = 1e-8;

void solution::print() const {
	switch (_root_count) {
	case 0:
		cout << "No roots or incorrect input";
		break;
	case 1:
		cout << "Root is: " << _x1;
		break;
	case 2:
		cout << "Roots are: " << _x1 << "," << _x2;
		break;
	}
}

solution equation::Solve() const {
	double x_1 = 0;
	double x_2 = 0;
	if (abs(_a) < eps) {
		if (abs(_b) < eps) {
			return { 0,0,0 };
		}
		x_1 = -_c / _b;
		x_2 = -_c / _b;
		return { 1,x_1,x_2 };
	}
	double discr = _b * _b - 4 * _a * _c;
	if (discr < 0) {
		return { 0,0,0 };
	}
	x_1 = (-_b + sqrt(discr)) / (2 * _a);
	x_2 = (-_b - sqrt(discr)) / (2 * _a);
	return { 2, x_1,x_2 };
}

void Interface() {
	equation eq(cin);
	eq.Solve();
	const solution sol = eq.Solve();
	sol.print();
}
std::istream& operator >> (std::istream& is, equation& eqn) {
	is >> eqn._a >> eqn._b >> eqn._c;
	return is;
}