#include "stack.h"
#include <gtest.h>

#include <iostream>
 
using namespace std;
 
int main()
{
    Stack <char> stackSymbol(5);
    int ct = 0;
    char ch;
 
    while (ct++ < 5)
    {
        cin >> ch;
        stackSymbol.push(ch); // �������� �������� � ����
    }
 
    cout << endl;
 
    stackSymbol.printStack(); // ������ �����
 
    cout << "\n\n������ ������� �� �����\n";
    stackSymbol.pop();
 
    stackSymbol.printStack(); // ������ �����
 
    Stack<char> newStack(stackSymbol);
 
    cout << "\n\n�������� ����������� �����������!\n";
    newStack.printStack();
 
    cout << "������ � ������� �������: "<< newStack.Peek(2) << endl;
 
    return 0;
}

