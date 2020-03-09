#ifndef TASKLIST_H
#define TASKLIST_H
#include "Task.h"
#include <fstream>
using namespace std;
struct TaskNode //The TaskNode is a struct with variables: Task task, TaskNode* next, int taskID
{
    Task task;
    TaskNode* next;
    int taskID;
};
class TaskList {
public:
    TaskList();
    virtual ~TaskList();
    void insert(Task&);
    void remove(const int&);
    void output();
    void taskTagger();
    int getNumTasks();
    void fileOut(string);
private:
    TaskNode* head;
    int static numTasks;
};

#endif /* TASKLIST_H */

