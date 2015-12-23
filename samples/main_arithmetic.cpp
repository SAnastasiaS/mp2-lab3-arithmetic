#include "RPN.h"
int main()
{
	string l = "2^3+(9+1)*2";
	string r;
	r = RPN::GetExpression(l);//убрать в private
		cout << r << endl;
	double b = RPN::Counting(r);

	cout << b << endl;
	return 0;
}