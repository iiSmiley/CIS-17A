#include "LinkedList.h"
LinkedList::LinkedList()
{
    head = NULL;
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
    head=NULL;
   
}
void LinkedList::append(int val)
{
    Node* newNode = new Node;
    newNode->value = val;
    newNode->next = NULL;
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
    //cout << val << " Has been appended" << endl;
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
            //cout << val << " Has been found" << endl;
            return true;
        }
        nodePtr = nodePtr->next;
    }
    //cout << val << " Has not been found" << endl;
    return false;
}
void LinkedList::insert(int val)
{
    //cout << "Inserting " << val << "..." << endl;
    Node* newNode = new Node;
    newNode->value= val;
    newNode->next = NULL;
    if(!head)
    {
        head = newNode;
    }
    else
    {
        Node* nodePtr = head;
        Node* prev = new Node;
        prev = NULL;
        while(nodePtr != NULL && nodePtr->value < val)
        {
            prev = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(prev == NULL)
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
        cout << val << " Has been removed" << endl;
    }
    else
    {
        nodePtr = head;
        while(nodePtr != NULL && nodePtr->value != val)
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