#include "students.hpp"

solution BadStudent::Solve(equation eqn) const {
	return { 1,0,0 }; 
}
solution GoodStudent::Solve(equation eqn) const {
	return eqn.Solve();
}

solution AverageStudent::Solve(equation eqn) const {
	if (rand() % 2) {
		return eqn.Solve();
	}
	else {
		return { 1,0,0 };
	}
}