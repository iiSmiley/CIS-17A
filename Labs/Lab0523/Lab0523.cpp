#include <cstdlib>
#include <iostream>
#include "LinkedList.h"
using namespace std;
/*
struct Node
{
    int value;
    Node* next;
};
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
LinkedList::LinkedList()
{
    head = nullptr;
}
LinkedList::~LinkedList()
{
    Node* nodePtr = new Node;
    nodePtr = head;
    while(nodePtr)
    {
        Node* temp = nodePtr;
        nodePtr = nodePtr->next;
        delete temp;
    }
    head=nullptr;
}
void LinkedList::append(int val)
{
    Node* newNode = new Node;
    newNode->value = val;
    newNode->next = nullptr;
    if(!head)
    {
        head = newNode;
    }
    else
    {
        Node* nodePtr = head;
        while(nodePtr->next) //nodePtr->next
        {
            nodePtr = nodePtr->next;
        }
        
        nodePtr->next = newNode;
    }
    cout << val << " Has been appended" << endl;
}
void LinkedList::print()
{
    Node* nodePtr = new Node;
    nodePtr = head;
    while(nodePtr)
    {
        cout << nodePtr->value << "   |   ";
        nodePtr = nodePtr->next;
    }
    cout << endl;
}
bool LinkedList::search(int val)
{
    Node* nodePtr = new Node;
    nodePtr = head;
    while(nodePtr)
    {
        if(nodePtr->value == val)
        {
            cout << val << " Has been found" << endl;
            return true;
        }
        nodePtr = nodePtr->next;
    }
    cout << val << " Has not been found" << endl;
    return false;
}
void LinkedList::insert(int val)
{
    cout << "Inserting " << val << "..." << endl;
    Node* newNode = new Node;
    newNode->value= val;
    newNode->next = nullptr;
    if(!head)
    {
        head = newNode;
    }
    else
    {
        Node* nodePtr = head;
        Node* prev = new Node;
        prev = nullptr;
        while(nodePtr != nullptr && nodePtr->value < val)
        {
            prev = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(prev == nullptr)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            newNode->next=nodePtr;
            prev->next=newNode;
        }
    }
}
void LinkedList::remove(int val)
{
    Node* nodePtr = new Node;
    Node* prev = new Node;
    if(!head)
    {
        return;
    }
    if(head->value == val)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        nodePtr = head;
        while(nodePtr != nullptr && nodePtr->value != val)
        {
            prev = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(nodePtr)
        {
            prev->next = nodePtr->next;
            delete nodePtr;
            cout << val << " Has been removed" << endl;
        }
    }
}
 */
int main()
{
    /*LinkedList a;
    a.append(1);
    a.append(2);
    a.append(4);
    a.print();
    a.insert(3);
    a.print();
    a.insert(7);
    a.print();
    a.search(7);
    a.remove(7);
    a.print();
    */
    LinkedList b;
    b.insert(69);
    b.print();
    cout << "A single value has been inserted and displayed!" << endl;
    b.insert(84);
    b.insert(100);
    b.insert(50);
    b.print();
    b.remove(5);
    b.print();
    return 0;
}

