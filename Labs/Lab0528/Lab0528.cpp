#include <cstdlib>
#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node* next;
};
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
    void push(int value);
    void pop();
    void output();
};
StaticStack::StaticStack(int capacity)
{
    this->capacity = capacity;
    this->top=-1;
    this->stack = new int[this->capacity];
}
StaticStack::~StaticStack()
{
    if(stack)
    {
        delete[] stack;
    }
}
bool StaticStack::isEmpty()
{
    return top==-1;
}
void StaticStack::push(int value)
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
void StaticStack::pop()
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
void StaticStack::output()
{
    for(int i=0; i<=top; i++)
    {
        cout << stack[i] << "    ";
    }
    cout << endl;
}
class DynamicStack
{
private:
    Node* top;
public:
    DynamicStack();
    ~DynamicStack();
    void push(int value);
    void pop();
    void output();
};
DynamicStack::DynamicStack()
{
    top = NULL;
}
DynamicStack::~DynamicStack()
{
    Node* nodePtr = top;
    while(nodePtr)
    {
        Node* temp = nodePtr;
        nodePtr=nodePtr->next;
        delete temp;
    }
    top = NULL;
}
void DynamicStack::push(int value)
{
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = NULL;
    if(top)
    {
        newNode->next = top;
    }
    top = newNode;
}
void DynamicStack::pop()
{
    //Empty Check
    if(!top)
    {
        Node* temp = top;
        top = top->next;
        delete temp;
    }
}
void DynamicStack::output()
{
    Node* nodePtr = top;
    while(nodePtr)
    {
        cout << nodePtr->value << "     ";
        nodePtr = nodePtr->next;
    }
    cout << endl;
}
int main()
{

    DynamicStack a;
    a.push(5);
    a.push(6);
    a.push(6);
    a.push(9);
    a.output();
    StaticStack s(5);
    s.pop();
    s.push(5);
    s.output();
    return 0;
}

