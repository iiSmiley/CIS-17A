#include "TaskList.h"
//Default constructor
TaskList::TaskList()
{
    head = NULL;
}
TaskList::~TaskList()
{
    TaskNode* nodePtr = new TaskNode;
    nodePtr = head;
    while(nodePtr)
    {
        TaskNode* temp = nodePtr;
        nodePtr = nodePtr->next;
        delete temp;
    }
    head = NULL;
}
void TaskList::insert(Task& task)
{
    cout << "inserting..." << endl;
    //cout << task << endl;
    TaskNode* newNode = new TaskNode;
    newNode->task = task;
    newNode->next = NULL;
    if(!head)
    {
        head = newNode;
    }
    else
    {
        TaskNode* nodePtr =head;
        TaskNode* prev = new TaskNode;
        prev = NULL;
        while(nodePtr != NULL && nodePtr->task.getDay() < task.getDay())
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
            newNode->next = nodePtr;
            prev->next = newNode;
        }
    }
    taskTagger();
}
void TaskList::taskTagger()
{
    TaskNode* nodePtr = new TaskNode;
    nodePtr = head;
    int i = 1;
    while(nodePtr)
    {
        nodePtr->taskID = i;
        i++;
        //cout << i << endl;
        nodePtr = nodePtr->next;
    }
    this->numTasks = i-1;
}
void TaskList::remove(const int& id)
{
    cout << "Removing task #" << id << "..." <<  endl;
    TaskNode* nodePtr = new TaskNode;
    TaskNode* prev = new TaskNode;
    if(!head)
    {
        cout << "The task list is currently empty." << endl;
        return;
    }
    if(head->taskID == id)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;        
    }
    else
    {
        nodePtr = head;
        while(nodePtr != NULL && nodePtr->taskID != id)
        {
            prev = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(nodePtr)
        {
            prev->next = nodePtr->next;
            delete nodePtr;
            cout << "Task #" << id << " Has been removed" << endl;
        }
    }    
    taskTagger();
}
void TaskList::output()
{
    TaskNode* nodePtr = new TaskNode;
    nodePtr = head;
    //cout << setw(4) << "#  |";
    cout << setfill(' ') << left;
    cout << "Task#| ";
    cout << setw(30) << "Task" << "| ";
    cout << setw(6) << "Date" << " | ";
    cout << setw(6) << "From" << "| ";
    cout << setw(6) << "To" << "| " << "Update" << endl;
    cout << setfill('_') << setw(92) << "_" <<  endl;
    while(nodePtr)
    {
        cout << setw(5) << right << setfill(' ') <<nodePtr->taskID << "|";
        cout << nodePtr->task << endl;
        nodePtr = nodePtr->next;
    }
    cout << endl;    
}
int TaskList::getNumTasks()
{
    return numTasks;
}
int TaskList::numTasks =0;