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
#include "StaticStack.h"
#include "DynamicStack.h"
using namespace std;

/*template<class T>
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

class StaticQueue
{
private:
    int* queue;
    int size;
    int capacity;
    int front;
    int rear;
public:
    StaticQueue();
    ~StaticQueue();
    StaticQueue(int capacity);
    void enqueue (int val);
    int dequeue ();
    void output();
};
StaticQueue::~StaticQueue()
{
    
}
StaticQueue::StaticQueue()
{
    
}
StaticQueue::StaticQueue(int capacity)
{
    this->capacity = capacity;
    this->queue = new int[this->capacity];
    this->size = 0;
    this->front = this->rear = -1;
}
void StaticQueue::enqueue(int val)
{
    if(size==capacity)
    {
        cout << "The Queue is full!" << endl;
    }
    else
    {
        if(front == -1)
        {
            front = rear = 0;
            queue[rear] = val;
            size++;
        }
        else
        {
            rear = (rear+1)%capacity; queue[rear] = val;
            size++;
        }
    }
}
int StaticQueue::dequeue()
{
    if(size == 0)
    {
        cout << "The Queue is empty!" << endl;
    }
    else
    {
        int val = queue[front];
        front = (front+1)%capacity;
        size--;
        return val;
    }
}
void StaticQueue::output()
{
    for(int i=0; i<size; i++)
    {
        cout << queue[(front+i)%capacity] << "  "; 
    }
    cout << endl;
}
struct Node
{
    int val;
    Node* next;
};
class DynamicQueue
{
private:
    Node* front;
    Node* rear;
public:
    DynamicQueue();
    ~DynamicQueue();
    void enqueue (int val);
    void dequeue ();
    void output();
};
DynamicQueue::DynamicQueue()
{
    front = rear = NULL;
}
void DynamicQueue::enqueue(int val)
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
void DynamicQueue::dequeue()
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
void DynamicQueue::output()
{
    Node* nodePtr = new Node;
    nodePtr = front;
    while(nodePtr)
    {
        cout << nodePtr->val << "   ";
        nodePtr = nodePtr->next;
    }
    cout << endl;
    delete nodePtr;
}
DynamicQueue::~DynamicQueue()
{
    
}
    
int main()
{   /*
    StaticStack<int> s(5);
    s.output();
    s.push(1);
    s.push(2);
    s.output();
    s.pop();
    s.output();
    StaticStack<string> a(5);
    a.push("Omar");
    a.push("Matthew");
    a.output();
    StaticStack<char> b(5);
    b.push('A');
    b.push('B');
    b.output();
    b.pop();
    b.pop();
    b.output();
    return 0;
    */
    /*
    DynamicStack<int> s;
    s.output();
    s.pop();
    s.push(9);
    s.push(3);
    s.push(5);
    s.output();
    s.pop();
    s.output();
    return 0;
    */
    /*
    DynamicQueue a;
    a.enqueue(10);
    a.enqueue(9);
    a.enqueue(6);
    a.output();
    a.dequeue();
    a.output();
    */
    /*
    StaticQueue a(4);
    a.enqueue(1);
    a.enqueue(2);
    a.output();
    a.enqueue(3);
    a.enqueue(4);
    a.enqueue(5);
    a.dequeue();
    a.enqueue(5);
    a.output();
    */ 
    
}

