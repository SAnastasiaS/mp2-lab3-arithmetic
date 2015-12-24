#include "RPN.h"
int main()
{
	cout << "Enter an expression"<< endl;
	string l;
	cin >> l;
	string c = RPN::GetExpression(l);
	cout<< c<< endl;
	double r = RPN::Calculate(l);//Неправильно считает!
    cout << r << endl;
	return 0;
}