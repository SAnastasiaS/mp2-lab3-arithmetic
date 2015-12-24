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
	
private:
	
	static string InsertValue(string input);
	static double Counting(string input);
	static bool IsDelimeter(char c);
	static bool IsOperator(char ñ);
	static short unsigned int GetPriority(char s);
};