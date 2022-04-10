#ifndef STUDENTS_H
#define STUDENTS_H
#include <string> 
#include "Equation.h"
class Student {
public:
	explicit Student(std::string name) : _name(name) {};
	std::string getName() const;
	virtual Solution Solve(Equation &eqn) const = 0;
	virtual ~Student() {};
private:
	std::string _name;
};

class BadStudent : public Student {
public:
	BadStudent(std::string name) : Student(name) {};
	Solution Solve(Equation &eqn) const override;

};

class GoodStudent : public Student {
public:
	GoodStudent(std::string name) : Student(name) {};
	Solution Solve(Equation &eqn) const override;
};

class AverageStudent : public Student {
public:
	AverageStudent(std::string name) : Student(name) {};
	Solution Solve(Equation &eqn) const override;
};

#endif // !STUDENTS_H
