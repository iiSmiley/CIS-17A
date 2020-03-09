/* 
 * File:   Experiment0604.cpp
 * Author: Omar Alkendi
 * Created on June 4, 2019, 3:20 PM
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #x Exercise#x
 *    PROBLEM DEFINITION: Day of the Year
 * 
 *                  DATE: xx/xx/20xx
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */
#include <cstdlib>
#include <iostream>
using namespace std;
class Val
{
private:
    int val;
public:
    Val();
    ~Val();
    void setVal(int);
    class NegativeVal
    {};
    int getVal();
};
Val::~Val()
{
    
}
Val::Val()
{
    val = 0;
}
int Val::getVal()
{
    return val;
}
void Val::setVal(int val)
{
    if(val >= 0)
    {
        this->val = val;
    }
    else
    {
        throw NegativeVal();
    }
}

/*
template<class T>
struct Node
{
    T value;
    Node* next;
};

template<class T>
class StaticStack
{
private:
    int capacity;
    int top;
    int* stack;
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
    this->stack = new int[this->capacity];
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
    for(int i=0; i<=top; i++)
    {
        cout << stack[i] << "    ";
    }
    cout << endl;
}
/*
template<class T>
class DynamicStack
{
private:
    Node* top;
public:
    DynamicStack();
    ~DynamicStack();
    void push(T value);
    void pop();
    void output();
};
template<class T>
DynamicStack<T>::DynamicStack()
{
    this->top = NULL;
}
template<class T>
DynamicStack<T>::~DynamicStack()
{
    Node* nodePtr = this->top;
    while(nodePtr)
    {
        Node* temp = nodePtr;
        nodePtr=nodePtr->next;
        delete temp;
    }
    this->top = NULL;
}
template<class T>
void DynamicStack<T>::push(int value)
{
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = NULL;
    if(this->top)
    {
        newNode->next = this->top;
    }
    this->top = newNode;
}
template<class T>
void DynamicStack<T>::pop()
{
    //Empty Check
    if(!this->top)
    {
        Node* temp = this->top;
        this->top = this->top->next;
        delete temp;
    }
}
template<class T>
void DynamicStack<T>::output()
{
    Node* nodePtr = this->top;
    while(nodePtr)
    {
        cout << nodePtr->value << "     ";
        nodePtr = nodePtr->next;
    }
    cout << endl;
}
*/
int main()
{
    /*DynamicStack a;
    a.push(5);
    a.push(6);
    a.push(6);
    a.push(9);
    a.output();
    StaticStack<StaticStack> s;
    s.push<int>(5);
    s.pop();
    s.push<int>(5);
    s.output();*/
    Val value;
    try
    {
        int temp;
        cin >> temp;
        value.setVal(temp);
    }
    catch(Val::NegativeVal)
    {
        cout << "Negative" << endl;
    }

    cout << value.getVal();
    return 0;
}

