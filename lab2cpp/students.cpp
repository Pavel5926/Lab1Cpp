#include "students.h"

std::string Student::getName() const { return this->_name; }

Solution BadStudent::Solve(Equation &eqn) const {
	return { 1,0,0 }; 
}
Solution GoodStudent::Solve(Equation &eqn) const {
	return eqn.Solve();
}

Solution AverageStudent::Solve(Equation &eqn) const {
	if (rand() % 2) {
		return eqn.Solve();
	}
	else {
		return { 1,0,0 };
	}
} 