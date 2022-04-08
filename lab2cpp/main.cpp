#include <iostream>
#include <fstream>
#include <tuple>
#include <vector>
#include <queue>
#include "Equation.h"
#include "students.hpp"
using namespace std;
int main(void)
{
	vector <string> name(2);
	name[0] = "Popov Pavel";
	name[1] = "Kulyanin Anatoliy";
	ifstream coefs ("input.txt");
	vector <equation> eq_list{ coefs,coefs,coefs };
	BadStudent firstStud(name[0]);
	solution firstSol = firstStud.Solve(eq_list[0]);
	queue <tuple <equation, solution, string>> answers;
	answers.push({ eq_list[0],firstSol,firstStud.getName() });

	//eq_list[1] = { 1,-4,4 };
	return 0;
}