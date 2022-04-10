#ifndef EQUATION_H
#define EQUATION_H
#include <iostream>
#include <cmath>

void Interface();
class Solution {
public:
	Solution(int root_count, double x1, double x2) : _root_count(root_count), _x1(x1), _x2(x2) {};
	void print(std::ostream& out) const;
	bool operator== (const Solution& to_compare);
private:
	int _root_count;
	double _x1;
	double _x2;
};

class Equation {
public:
	friend std::istream& operator>>(std::istream& is, Equation& eqn);
	Equation() : _a(0), _b(0), _c(0) {};
	Equation(std::istream& in) {
		if (!(in >> _a >> _b >> _c))
			throw std::runtime_error("unable to read coefficients");
	}
	Solution Solve() const;
private:
	double _a;
	double _b;
	double _c;
};


#endif // !EQUATION_H
