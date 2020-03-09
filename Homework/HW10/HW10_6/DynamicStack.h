#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H
#include <iostream>
using namespace std;
struct Node
{
    string value;
    Node* next;
};
class DynamicStack
{
private:

    Node* top;
public:
    DynamicStack();
    ~DynamicStack();
    void push(string value);
    void pop();
    void output();
};

#endif /* DYNAMICSTACK_H */

