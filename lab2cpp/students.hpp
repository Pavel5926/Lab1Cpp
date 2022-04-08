#ifndef STUDENTS_H
#define STUDENTS_H
#include <string> 
#include "Equation.h"
class Student {
public:
	Student(std::string name) : _name(name) {};
	virtual solution Solve(equation eqn) const;
	virtual ~Student() {};
private:
	std::string _name;
};

class BadStudent : Student {
public:
	BadStudent(std::string name) : Student(name) {};
	solution Solve(equation eqn) const override;

};

class GoodStudent : Student {
public:
	GoodStudent(std::string name) : Student(name) {};
	solution Solve(equation eqn) const override;
};

class AverageStudent : Student {
public:
	AverageStudent(std::string name) : Student(name) {};
	solution Solve(equation eqn) const override;
};

#endif // !STUDENTS_H
