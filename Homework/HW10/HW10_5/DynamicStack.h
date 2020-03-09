#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H
#include <iostream>
#include <new>
using namespace std;
template<class T>
class DynamicStack
{
private:
    struct Node
    {
        T value;
        Node* next;
    };
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
    Node* nodePtr = new Node;
    nodePtr = this->top;
    while(nodePtr)
    {
        Node* temp = nodePtr;
        nodePtr=nodePtr->next;
        delete temp;
    }
    this->top = NULL;
}
template<class T>
void DynamicStack<T>::push(T value)
{
    try
    {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->next = NULL;
        if(this->top)
        {
            newNode->next = this->top;
        }
        this->top = newNode;
        double* ptr = new double[9999999999];
    }
    catch(bad_alloc)
    {
        //cout << "Insufficient memory!" << endl;
        
    }
}
template<class T>
void DynamicStack<T>::pop()
{
    //Empty stack check Check
    if(this->top)
    {
        Node* temp = new Node;
        temp = this->top;
        this->top = top->next;
        delete temp;
    }
    else if(!top)
    {
        cout << "Stack is Empty!" << endl;
    }
}
template<class T>
void DynamicStack<T>::output()
{
    Node* nodePtr = new Node;
    nodePtr = this->top;
    if(!nodePtr)
    {
        cout << "Stack is Empty!";
    }
    while(nodePtr)
    {
        cout << nodePtr->value << "     ";
        nodePtr = nodePtr->next;
    }
    cout << endl;
}
#endif /* DYNAMICSTACK_H */

