#ifndef EQUATION_H
#define EQUATION_H
#include <iostream>
#include <cmath>

void Interface();
class solution {
public:
	friend bool operator== (const solution& first, const solution& second);
	solution(int root_count, double x1, double x2) : _root_count(root_count), _x1(x1), _x2(x2) {};
	void print(std::ostream& out) const;
private:
	int _root_count;
	double _x1;
	double _x2;
};

class equation {
public:
	friend std::istream& operator>>(std::istream& is, equation& eqn);
	equation(std::istream& in) {
		if (!(in >> _a >> _b >> _c))
			throw std::runtime_error("unable to read coefficients");
	}
	solution Solve() const;
private:
	double _a;
	double _b;
	double _c;
};


#endif // !EQUATION_H
