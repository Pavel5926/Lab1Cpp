#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <queue>
#include <map>
#include <tuple>
#include <vector>
#include <iterator>
#include <fstream>
#include "students.h"
#include "teacher.h"
#include "Equation.h"
using namespace std;

vector <Student*> buildList(istream& in);
queue <tuple <Equation, Solution, string>> buildQueue(vector <Student*>& list, vector <Equation>& equations);
vector <Equation> readEquations(istream& in);

#endif // !FUNCTIONS_H
