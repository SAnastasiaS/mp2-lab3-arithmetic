#include "RPN.h"
int main()
{
	cout << "Enter an expression"<< endl;
	string l;
	cin >> l;
	double r = RPN::Calculate(l);//����������� �������!
    cout << r << endl;
	return 0;
}