#pragma once

#include <cassert> // ��� assert
#include <iostream>
 
#include <iomanip> // ��� setw
 
template <typename T>
class Stack
{
private:
    T *stackPtr;                      // ��������� �� ����
    const int size;                   // ������������ ���������� ��������� � �����
    int top;                          // ����� �������� �������� �����
public:
    Stack(int = 10);                  // �� ��������� ������ ����� ����� 10 ���������
    Stack(const Stack<T> &);          // ����������� �����������
    ~Stack();                         // ����������
 
    inline void push(const T & );     // ��������� ������� � ������� �����
    inline T pop();                   // ������� ������� �� ������� ����� � ������� ���
    inline void printStack();         // ����� ����� �� �����
    inline const T &Peek() const; // ���������� ������� �����	
    inline int getStackSize() const;  // �������� ������ �����
    inline T *getPtr() const;         // �������� ��������� �� ����
    inline int getTop() const;        // �������� ����� �������� �������� � �����
};
 
// ���������� ������� ������� ������ STack
 
// ����������� �����
template <typename T>
Stack<T>::Stack(int maxSize) :
    size(maxSize) // ������������� ���������
{
    stackPtr = new T[size]; // �������� ������ ��� ����
    top = -1; // �������������� ������� ������� �����;//�������� ���������� ����?
}
 
// ����������� �����������
template <typename T>
Stack<T>::Stack(const Stack<T> & otherStack) :
    size(otherStack.getStackSize()) // ������������� ���������
{
    stackPtr = new T[size]; // �������� ������ ��� ����� ����
    top = otherStack.getTop();
 
    for(int ix = 0; ix < top; ix++)
        stackPtr[ix] = otherStack.getPtr()[ix];
}
 
// ������� ����������� �����
template <typename T>
Stack<T>::~Stack()
{
    delete [] stackPtr; // ������� ����
}
 
// ������� ���������� �������� � ����
template <typename T>
inline void Stack<T>::push(const T &value)
{
    // ��������� ������ �����
    assert(top < size); // ����� �������� �������� ������ ���� ������ ������� �����
	top++;
    stackPtr[top] = value; // �������� ������� � ����

}
 
// ������� �������� �������� �� �����
template <typename T>
inline T Stack<T>::pop()
{
    // ��������� ������ �����
    assert(top > -1); // ����� �������� �������� ������ ���� ������ 0
 
    --top; // ������� ������� �� �����
	return stackPtr[top+1];
}//����� ��������� ��������� �������� �� ����� � ������ � ����������
 
// ������� ���������� n-� ������� �� ������� �����
template <class T>
inline const T &Stack<T>::Peek() const
{
  return stackPtr[top]; // ������� n-� ������� �����
}



//// ����� ����� �� �����
//template <typename T>
//inline void Stack<T>::printStack()
//{
//    for (int ix = top - 1; ix >= 0; ix--)
//        cout << "|" << setw(4) << stackPtr[ix] << endl;
//}
 
// ������� ������ �����
template <typename T>
inline int Stack<T>::getStackSize() const
{
    return size;
}
 
// ������� ��������� �� ���� (��� ������������ �����������)
template <typename T>
inline T *Stack<T>::getPtr() const
{
    return stackPtr;
}
 
// ������� ������ �����
template <typename T>
inline int Stack<T>::getTop() const
{
    return top;
}
