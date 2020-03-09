#ifndef STATICSTACK_H
#define STATICSTACK_H
#include <iostream>
using namespace std;

template<class T>
class StaticStack
{
private:
    int capacity;
    int top;
    T* stack;
    bool isEmpty();
public:
    StaticStack(int capacity);
    ~StaticStack();
    void push(T value);
    void pop();
    void output();
};
template<class T>
StaticStack<T>::StaticStack(int capacity)
{
    this->capacity = capacity;
    this->top=-1;
    this->stack = new T[this->capacity];
}
template<class T>
StaticStack<T>::~StaticStack()
{
    if(stack)
    {
        delete[] stack;
    }
}
template<class T>
bool StaticStack<T>::isEmpty()
{
    return top==-1;
}
template<class T>
void StaticStack<T>::push(T value)
{
    if(top==capacity-1)
    {
        cout << "Full Stack!" << endl;
    }
    else
    {
        top++;
        stack[top]=value;
    }
}
template<class T>
void StaticStack<T>::pop()
{
    if(isEmpty())
    {
        cout << "Empty Stack!" << endl;
    }
    else
    {
        top--;
    }
}
template<class T>
void StaticStack<T>::output()
{
    if(isEmpty())
    {
        cout << "Stack is empty!";
    }
    for(int i=0; i<=top; i++)
    {
        cout << stack[i] << "    ";
    }
    cout << endl;
}

#endif /* STATICSTACK_H */

