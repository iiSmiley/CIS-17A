#ifndef STATICQUEUE_H
#define STATICQUEUE_H
#include "iostream"
using namespace std;

template <class T>
class StaticQueue
{
private:
    T* queue;
    int size;
    int capacity;
    int front;
    int rear;
public:
    StaticQueue();
    ~StaticQueue();
    StaticQueue(int capacity);
    void enqueue (T val);
    T dequeue ();
    void output();
};
template <class T>
StaticQueue<T>::~StaticQueue()
{
    
}
template <class T>
StaticQueue<T>::StaticQueue()
{
    
}
template <class T>
StaticQueue<T>::StaticQueue(int capacity)
{
    this->capacity = capacity;
    this->queue = new T[this->capacity];
    this->size = 0;
    this->front = this->rear = -1;
}
template <class T>
void StaticQueue<T>::enqueue(T val)
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
template <class T>
T StaticQueue<T>::dequeue()
{
    if(size == 0)
    {
        cout << "The Queue is empty!" << endl;
    }
    else
    {
        T val = queue[front];
        front = (front+1)%capacity;
        size--;
        return val;
    }
}
template <class T>
void StaticQueue<T>::output()
{
    bool iter = false;
    for(int i=0; i<size; i++)
    {
        cout << queue[(front+i)%capacity] << "  "; 
        iter = true;
    }
    if(iter)
    {
        cout << endl;
    }
}

#endif /* STATICQUEUE_H */

