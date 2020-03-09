#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H
#include <iostream>
using namespace std;


template <class T>
class DynamicQueue
{
private:
    struct Node
    {
        T val;
        Node* next;
    };
    Node* front;
    Node* rear;
public:
    DynamicQueue();
    ~DynamicQueue();
    void enqueue (T val);
    void dequeue ();
    void output();
};
template <class T>
DynamicQueue<T>::DynamicQueue()
{
    front = rear = NULL;
}
template <class T>
DynamicQueue<T>::~DynamicQueue()
{
    
}
template <class T>
void DynamicQueue<T>::enqueue(T val)
{
    Node* newNode = new Node;
    newNode->val = val;
    newNode->next = NULL;
    if(!rear)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
template <class T>
void DynamicQueue<T>::dequeue()
{
    if(!front)
    {
        rear = NULL;
        return;
    }
    else
    {
        Node* temp = new Node;
        temp = front;
        front = front->next;
        if(!front)
        {
            rear = NULL;
        }
        delete temp;   
    }
}
template <class T>
void DynamicQueue<T>::output()
{
    bool iter = false;
    Node* nodePtr = new Node;
    nodePtr = front;
    while(nodePtr)
    {
        cout << nodePtr->val << "   ";
        nodePtr = nodePtr->next;
        iter = true;
    }
    if(iter)
    {
        cout << endl;
    }
    delete nodePtr;
}
#endif /* DYNAMICQUEUE_H */

