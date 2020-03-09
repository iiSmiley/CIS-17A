#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
using namespace std;
class LinkedList
{
private:
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    void append(int val);
    void insert(int val);
    void remove(int val);
    bool search(int val);
    void print();
};
#endif /* LINKEDLIST_H */

