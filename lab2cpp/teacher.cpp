#include "teacher.h"
#include "Equation.h"
#include <tuple>
#include <iterator>
void Teacher::review(std::queue < std::tuple <equation, solution, std::string> > studQueue) {
	if (!studQueue.empty()) {
		std::tuple <equation, solution, std::string> pending = { studQueue.front() };
		solution teacherSol = std::get<equation>(pending).Solve();
		if (_results.find(std::get<std::string>(pending)) == _results.end()) {
			_results.insert({ std::get<std::string>(pending), 0 });
		}
		bool solvedRight = teacherSol == std::get<solution>(pending);
		std::map <std::string, int> ::iterator it;
		it = _results.find(std::get<std::string>(pending);
		if (solvedRight) {
			_results[std::get<std::string>(pending)].second++;
		}
	}
	//solution teacherSol = 
}
solution Teacher::Solve(equation eqn) const {
	return eqn.Solve();
}