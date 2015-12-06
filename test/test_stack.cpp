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
        stackSymbol.push(ch); // помещаем элементы в стек
    }
 
    cout << endl;
 
    stackSymbol.printStack(); // печать стека
 
    cout << "\n\nУдалим элемент из стека\n";
    stackSymbol.pop();
 
    stackSymbol.printStack(); // печать стека
 
    Stack<char> newStack(stackSymbol);
 
    cout << "\n\nСработал конструктор копирования!\n";
    newStack.printStack();
 
    cout << "Второй в очереди элемент: "<< newStack.Peek(2) << endl;
 
    return 0;
}

