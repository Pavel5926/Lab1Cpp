#ifndef TEACHER_H
#define TEACHER_H
#include <map>
#include <queue>
#include <tuple>
#include "Equation.h"
class Teacher {
public:
	solution Solve(equation eqn) const;
	void review(std::queue < std::tuple <equation, solution, std::string> >studQueue);
private:
	std::map <std::string, int> _results;
};
#endif // !TEACHER_H

