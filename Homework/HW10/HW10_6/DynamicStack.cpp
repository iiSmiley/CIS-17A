#include "DynamicStack.h"
DynamicStack::DynamicStack()
{
    this->top = NULL;
}
DynamicStack::~DynamicStack()
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
void DynamicStack::push(string value)
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
void DynamicStack::pop()
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
void DynamicStack::output()
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