/*
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: 
 *    PROBLEM DEFINITION: 
 * 
 *                  DATE: 05/12/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */

#include "Task.h"
using namespace std;
void showMenu()
{
    cout << "|||  Main Menu   |||" << endl;
    cout << "Please make a choice:" << endl;
    cout << "A) Open a My Week file." << endl;
    cout << "B) Create a My Week file." << endl;
    cout << "C) Display My Week." << endl;
    cout << "D) Add new task." << endl;
    cout << "E) Save My Week file." << endl;
    cout << "F) To close the program." << endl;
}
int hourObtainer()
{
    int val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0 && val<24)
        {
            return val;
        }
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "ERROR!!! Please enter a positive integer value that is between"
                << " 1 and 24!" << endl;
    }
    while(true);
}
int dayObtainer()
{
    int val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0 && val<=7)
        {
            return val;
        }
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "ERROR!!! Please enter a positive integer value that is between"
                << " 1 and 7!" << endl;
    }
    while(true);
}
void addTask(Task& task)
{
    int from = 0;
    int to = 0;
    int duration = 0;
    int day = 0;
    string def = "";
    cout << "What do you wanna do (Single word 24 Chars max): ";
    cin >> def;
    cout << "On which day? (Enter an integer e.g. MON=1 ~ SUN=7): ";
    day = dayObtainer();
    cout << "From: ";
    from = hourObtainer();
    cout << "To: ";
    to = hourObtainer();
    duration = to - from;
    task.addTask(def,day,from,duration);
}
int fileIn(Task& task)
{
    string filename;
    cout << "Enter a name for the file you would like to read and don't\n"
          <<"worry about the file extension, (ex. .bin) I will add them\n"
          <<"for you :";
    cin >> filename;
    filename+=".bin";
    ifstream inFile;
    inFile.open(filename.c_str(),ios::in|ios::binary);
    if (inFile)
    {
        inFile.read(reinterpret_cast<char*>(&task),sizeof(task));   
        inFile.close();
        cout << "File: " << filename << " was successfully read.\n";        
    }
    else
    {
        cout << "Could not open " << filename <<"for output\n";
    }
    task.output();
    return 0;
}
int fileOut(Task task)
{
    string filename;
 
     cout << "Enter a name for the file you would like to create and don't\n"
          <<"worry about the file extension, (ex. .bin) I will add them\n"
          <<"for you: ";
    cin >> filename;
    filename+=".bin";
    ofstream outFile;
    outFile.open(filename.c_str(),ios::out|ios::binary);
    cout << sizeof(task) << endl;
    if (outFile)
    {
        outFile.write(reinterpret_cast<char*>(&task),sizeof(task));
        outFile.close();
        cout << "File: " << filename << " was successfully written.\n";
    }
    else
    {
        cout << "Could not open "<< filename << "for output\n";
        return 1;
    }   
    return 0;
}
void createTask()
{
    cout << "My Week was created" << endl;
}
int main()
{
    //This is a simple menu driven application that utilizes the class inventory.
    char choice;
    int size = 0;
    Task task;
    do
    {
        showMenu(); //Display the main menu and waits for user's entry.
        cin >> choice;
        choice = toupper(choice); //Whether the user inputs a lower case or an
                                  //upper case char, toupper will take care 
                                  //of the input.
        switch(choice)
        {
            case 'A': fileIn(task);
                break;
            case 'B': createTask();
                break;
            case 'C': task.output();
                break;
            case 'D': addTask(task);
                break;
            case 'E': fileOut(task);
                break;
        }
    }
    while(toupper(choice) != 'F');
    return 0;
}
