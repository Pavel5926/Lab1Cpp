#include <iostream>
#include <cmath>
using namespace std;
int Solve(const double a, const double b, const double c, double& r1, double& r2) {
	if (a == 0) {
		if (b == 0) {
			return -1;
		}
		r1 = -c / b;
		r2 = -c / b;
		return 0;
	}
	double discr = b * b - 4 * a * c;
	if (discr < 0) {
		return -1;
	}
	r1 = (-b + sqrt(discr)) / (2 * a);
	r2 = (-b - sqrt(discr)) / (2 * a);
	return 0;
}
int main() {
	double a = 0;
	double b = 0;
	double c = 0;
	double root1 = 0;
	double root2 = 0;
	cin >> a >> b >> c;
	if (!Solve(a, b, c, root1, root2)) {
		cout << "root1 is:" << root1 << " root2 is:" << root2 << endl;
	}
	else cout << "no roots or incorrect input";

}