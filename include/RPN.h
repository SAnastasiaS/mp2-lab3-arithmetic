#include "stack.h"
#include <string>
#include <cstring>
#include <cctype>
#include <sstream> 
#include <cmath>
using namespace std;

class RPN//Reverse Polish Notation
{
public:
	static double Calculate(string input);
	
		static string GetExpression(string input);
			static double Counting(string input);
private:


	static bool IsDelimeter(char c);
	static bool IsOperator(char �);
	static short unsigned int GetPriority(char s);
};