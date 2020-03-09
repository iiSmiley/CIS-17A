/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #5 Exercise#2
 *    PROBLEM DEFINITION: Coin Toss
 * 
 *                  DATE: 05/03/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */

//#include <cstdlib>
//#include <iostream>
//#include <ctime>
//using namespace std;
/*
class NumberArray
{
private:
    int size;           //size of the number array;
    float* array;       
public:
    NumberArray();      //Default constructor
    NumberArray(int);   //Specified constructor by the problem
    ~NumberArray();     //Destructor (will delete the dynamically allocated array
    void setElement(const int&, float);//Sets the value of an element at certain location
    float getElement(const int&);      //Retrieves the value of an element
    float highest();            //Returns the highest number in the array
    float lowest();             //Returns the lowest number in the array
    float average();            //Returns the calculated average of all values in the array
};

//Definition of the default constructor
NumberArray::NumberArray()
{
    cout << "Creating default array..." << endl;
    size = 0;
    array = new float[size];
}

//Definition for specified constructor
NumberArray::NumberArray(int size)
{
    this -> size = size;
    array = new float[this -> size];
}

//Definition for the destructor
NumberArray::~NumberArray()
{
    cout << "Deleting the dynamically allocated array..." << endl;
    delete[] array;
}

void NumberArray::setElement(const int& loc, float value)
{
    if (loc < this -> size)
    {
        this -> array[loc] = value;
    }
    else
    {
        cout << "ERROR!!! The location is outside the range of array." << endl;
    }
}

float NumberArray::getElement(const int& loc)
{
    if (loc < this -> size)
    {
        return this -> array[loc];
    }
    if (loc >= this -> size)
    {
        cout << "ERROR!!! The location is outside the range of array." << endl;
        return 0;
    }   
}

float NumberArray::highest()
{
    float tempHigh= this -> array[0];
    for(int i=0; i < (this -> size)-1; i++)
    {
        if(tempHigh < this -> array[i+1])
        {
            tempHigh = this -> array[i+1];
        }
    }
    return tempHigh;
}

float NumberArray::lowest()
{
    float tempLow=this -> array[0];
    for(int i=0; i < (this -> size)-1; i++)
    {
        if(tempLow > this -> array[i+1])
        {
            tempLow = this -> array[i+1];
        }
    }
    return tempLow;
}

float NumberArray::average()
{
    float sum=0;
    for(int i=0; i < this -> size; i++)
    {
        sum += this -> array[i];
    }
    return sum/static_cast<float>(this -> size);
}
*/
/*
class Coin
{
private:
    string sideUp;
public:
    Coin();     //Default constructor that randomly tosses the coin one time
    void toss();//Tosses the coin
    string getSideUp();//Returns the the side of the coin that is facing up
};

//Definition of the default constructor
Coin::Coin()
{
    srand(time(0));         //srand is used to avoid the presence of patterns.
    int temp = rand()%2;    //The only problem with srand is that modern computers
    if(temp == 0)           //are so fast and could generate the same value
    {                       //on ech iteration.
        sideUp = "tails";
    }
    else
    {
        sideUp = "heads";
    }
}
//Definition of the function toss
void Coin::toss()
{
    int rand1 = rand();
    int rand2 = rand();
    int myRand;
    do
    {
        int rand3 = rand();
        myRand = (rand1+rand3)/rand2;
    }
    while(myRand > 1);
    if(myRand == 0)
    {
        sideUp = "tails";
    }
    else
    {
        sideUp = "heads";
    } 
}
//The sideUp getter for the class
string Coin::getSideUp()
{
    return sideUp;
}
*/
/*
//Assigning constant values for the freezing and the boiling points in Fahrenheit.
const int ETHYL_FREEZING    = -173;
const int ETHYL_BOILING     = 172;
const int OXYGEN_FREEZING   = -362;
const int OXYGEN_BOILING    = -306;
const int WATER_FREEZING    = 32;
const int WATER_BOILING     = 212;

class Temperature
{
private:
    float temperature;
public:
    Temperature();
    float getTemp();
    void setTemperature(float);
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
    void output();
};

Temperature::Temperature()
{
    temperature = 0;
}

void Temperature::setTemperature(float temprature)
{
    this -> temperature = temprature;
}

float Temperature::getTemp()
{
    return temperature;
}

bool Temperature::isEthylBoiling()
{
    if(temperature > ETHYL_BOILING)
    {
        cout << "Ethyl Alcohol will boil at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isEthylFreezing()
{
    if(temperature < ETHYL_FREEZING)
    {
        cout << "Ethyl Alcohol will freeze at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isOxygenBoiling()
{
    if(temperature > OXYGEN_BOILING)
    {
        cout << "Oxygen will boil at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isOxygenFreezing()
{
    if(temperature < OXYGEN_FREEZING)
    {
        cout << "Oxygen will freeze at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isWaterBoiling()
{
    if(temperature > WATER_BOILING)
    {
        cout << "Water will boil at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isWaterFreezing()
{
    if(temperature < WATER_FREEZING)
    {
        cout << "Water will freeze at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

void Temperature::output()
{
    isEthylFreezing();
    isEthylBoiling();
    isOxygenFreezing();
    isOxygenBoiling();
    isWaterFreezing();
    isWaterBoiling();
    
}
*/

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
/*
const int WD1 = 20; //Defining a constant value for the width of columns.

//Designing the specified Inventory class by the problem.
//The class and the definition of its member variables begins here.
//The functions are self explanatory.

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory();
    Inventory(int,int,double);
    void setItemNumber(int);
    void setQuantity(int);
    void setCost(double);
    void setTotalCost(int, double);
    int getItemNumber();
    int getQuantity();
    double getCost();
    double getTotalCost();
    void output();
};

Inventory::Inventory()
{
    (*this).cost        = 0;
    (*this).itemNumber  = 0;
    (*this).quantity    = 0;
    (*this).totalCost   = 0;
}

Inventory::Inventory(int itemNumber, int quantity, double cost)
{
    (*this).cost        = cost;
    (*this).itemNumber  = itemNumber;
    (*this).quantity    = quantity;
    setTotalCost(quantity,cost); 
    (*this).totalCost   = totalCost;  
}

void Inventory::setCost(double cost)
{
    (*this).cost = cost;
}

void Inventory::setItemNumber(int itemNumber)
{
    (*this).itemNumber = itemNumber;
}

void Inventory::setQuantity(int quantity)
{
    (*this).quantity = quantity;
}

void Inventory::setTotalCost(int quantity, double cost)
{
    (*this).totalCost = cost * quantity;
}

double Inventory::getCost()
{
    return cost;
}

int Inventory::getItemNumber()
{
    return itemNumber;
}

int Inventory::getQuantity()
{
    return quantity;
}

double Inventory::getTotalCost()
{
    return totalCost;
}

//The member output function is an addition to the class by me, the programmer, 
//to compact the codes in the general output function. 

void Inventory::output()
{
    cout << setw(WD1) << left << itemNumber;
    cout << setw(WD1) << left << quantity;
    cout << "$" << setw(WD1) << left << cost;
    cout << "$" << setw(WD1) << left << totalCost << endl;
}

//The class definition ends here.

//The numObtainer is a function with a purpose of validating the input of the
//user.

//The dNumObtainer is like the numObtainer, but it's used to obtain value
//of type double

double dNumObtainer()
{
    double val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0)
        {
            return val;
        }
        cout << "ERROR!!! Please enter a positive integer value that is greater"
                << " than 0!" << endl;
    }
    while(true);
}
//Generic output function.
void output(Inventory* aPtr, int size)
{
    cout << "______________________________________________________________________" << endl;
    cout << setw(WD1) << left << "Item Number";
    cout << setw(WD1) << left << "Quantity";
    cout << setw(WD1) << left << "Cost";
    cout << setw(WD1) << left << "Total Cost" << endl;
    cout << "______________________________________________________________________" << endl;
    
    for(int i=0; i<size; i++)
    {
        aPtr[i].output();
    }
}


class CashRegister
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double price;
    double tax;
    double total;
    int index;
public:
    CashRegister();
    void setItemNumber(Inventory*, const int&);
    void setQuantity(Inventory*, const int&);
    void setCost(Inventory*, const int&);
    int getItemNumber();
    int getQuantity();
    double getPrice();
    double getTax();
    double getTotal();
    int numObtainer();
    
};

CashRegister::CashRegister()
{
    itemNumber  = 0;
    quantity    = 0;
    cost        = 0;
    price       = 0;
    tax         = 0; 
    total       = 0;
    index       = 0;
}

void CashRegister::setItemNumber(Inventory* aPtr, const int& size)
{
    bool isTrue; //To exit the loop
    do
    {   
        isTrue = true;
        int tempNumber=0;
        cout << "Enter the item number: ";
        tempNumber = numObtainer();
        for(int i=0; i<size; i++)
        {
            if(aPtr[i].getItemNumber()== tempNumber)
            {
                this -> itemNumber = tempNumber;
                this -> index = i;
                this -> cost = aPtr[index].getCost();
                //cout << this ->cost << endl;
                this -> price = ((this -> cost)+(this -> cost) * 0.3);
                //cout << this -> price << endl;
                this -> tax = (this -> price)*0.06;
                isTrue = false;
            }
            else
            {
                cout << "ERROR!!! could not find the item in inventory." << endl;
                cout << "Please check your entry." << endl;   
            }
        }

    }
    while(isTrue);
}

void CashRegister::setQuantity(Inventory* aPtr, const int& size)
{
    bool isTrue;
    do
    {
        isTrue = true;
        int tempNumber;
        cout << "Enter the quantity you would like to sell: ";
        tempNumber = numObtainer();
        if(aPtr[index].getQuantity() >= tempNumber)
        {   
            int tempVal = aPtr[index].getQuantity();
            this -> quantity = tempNumber;
            this -> total = ((this -> price)+(this -> tax)) * (this -> quantity);
            aPtr[index].setQuantity(tempVal-tempNumber);
            aPtr[index].setTotalCost(aPtr[index].getQuantity(), aPtr[index].getCost());
            isTrue = false;
        }
        else
        {
            cout << "You only have " << aPtr[index].getQuantity() << " on hand." << endl;
            cout << "You can't give what you don't own!" << endl;
            cout << "Please enter a correct quantity." << endl;
        }
    }
    while(isTrue);
}

int CashRegister::getItemNumber()
{
   return itemNumber;
}

int CashRegister::getQuantity()
{
    return quantity;
}

double CashRegister::getPrice()
{
    return price;
}

double CashRegister::getTax()
{
    return tax;
}

double CashRegister::getTotal()
{
    return total;
}

int CashRegister::numObtainer()
{
    int val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0)
        {
            return val;
        }
        cout << "ERROR!!! Please enter a positive integer value that is greater"
                << " than 0!" << endl;
    }
    while(true);
}

int numObtainer()
{
    int val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0)
        {
            return val;
        }
        cout << "ERROR!!! Please enter a positive integer value that is greater"
                << " than 0!" << endl;
    }
    while(true);
}
void showMenu()
{
    cout << "|||  Main Menu   |||" << endl;
    cout << "Please make a choice:" << endl;
    cout << "A) Display inventory." << endl;
    cout << "B) Add new item." << endl;
    cout << "C) To use the cash register" << endl;
    cout << "D) To close the program." << endl;
}

void add(Inventory* aPtr, int& size)
{   //The add function allows the user to add new elements to the inventory list.
    int tempIndex  = size;
    //The temp index is used to let the add function starts from the end of the
    //array. Hence, it won't overwrite previous entries. To witness the
    //necessity of this variable, try adding items separately, but of 
    //of course without terminating the run.
    
    cout << "How many items would you like to add? ";
    size += (numObtainer());
    //the add function will return a new size for the array list that is equal
    //to the previous size + the number of elements the user will add.
    for(int i=tempIndex; i<size; i++)
    {
        cout << "Enter the item number: ";
                aPtr[i].setItemNumber(numObtainer());
        cout << "Enter quantity of item number " << aPtr[i].getItemNumber() << " : ";
                aPtr[i].setQuantity(numObtainer());
        cout << "Enter the cost of item number " << aPtr[i].getItemNumber() << " : ";
                aPtr[i].setCost(dNumObtainer());
                aPtr[i].setTotalCost(aPtr[i].getQuantity(),aPtr[i].getCost());
                //The last line was added to circumvent the issue related to 
                //the setTotalCost function. Due to the way the codes were
                //written in, the setYotalCost function won't work unless 
                //called manually.
    }
    //To lit the user see the updated list, an output function was incorporated
    //in the add function.
        for(int i=0; i<size; i++)
    {
        aPtr[i].output();
    }
}

void cashRegister(Inventory* aPtr, const int& size)
{
    CashRegister omar;
    
    omar.setItemNumber(aPtr,size);
    omar.setQuantity(aPtr,size);
    
    cout << "Subtotal: $ " << omar.getPrice() * omar.getQuantity() << endl;
    cout << "Tax: $ " << omar.getTax() * omar.getQuantity() << endl;
    cout << "Total cost: $ " << omar.getTotal() << endl;
}

int main()
{
    //This is a simple menu driven application that utilizes the class inventory.
    char choice;
    int size = 0;
    Inventory* list = new Inventory[size];
    do
    {
        showMenu(); //Display the main menu and waits for user's entry.
        cin >> choice;
        choice = toupper(choice); //Whether the user inputs a lower case or an
                                  //upper case char, toupper will take care 
                                  //of the input.
        switch(choice)
        {
            case 'A': output(list, size);
                break;
            case 'B': add(list, size);
                break;
            case 'C': cashRegister(list, size);
                break;
        }
    }
    while(toupper(choice) != 'D'); 

    delete[] list;
    list =NULL;
    return 0;
}


//int main()
//{   
    /*
    int size;
    cout << "Enter a size for the array: ";
    cin >> size;
    NumberArray n(size);
    for(int i=0; i<size; i++)
    {   
        float temp=0;
        cout << "Enter a float value for element #" << i+1 << ": ";
        cin >> temp;
        n.setElement(i,temp);
    }
    cout << "Highest value is: " << n.highest() << endl;
    cout << "Lowest value is: " << n.lowest() << endl;
    cout << "The average is: " << n.average() << endl;
    
    /*
    Coin c;         //Creating an object c
    
    cout << "The randomly initialized side is: " << c.getSideUp() << endl;
    cout << "Tossing the coin 20 time..." << endl;
    
                    //Tossing c 20 times...
    for(int i=0; i<21; i++)
    {
        c.toss();
        cout << c.getSideUp() << endl;
    }
    
    
    Temperature t;
    float tempT;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> tempT;
    t.setTemperature(tempT);
    t.output();
    
    */

const string MONTH[] = { "January"  , "February", "March"   , "April" ,
                         "May"      , "June"    , "July"    , "August",
                         "September", "October" , "November", "December"};

const int SIZE = 12;
const int DAYS_PER_MONTH[] = {31,28,31,30,31,30,31,31,30,31,30,31};

class DayOfYear
{
private:
    int day;
    int month;
    static string monthName[];
    static int dayPerMonth[];
public:
    DayOfYear(int); //Default constructor
    static string getMonthName(int&);
    void setMonth();//Subtract from day to find number of month
    void print();   //Display the converted value
};


string DayOfYear::monthName[] = { "January"  , "February", "March"   , "April", 
                                "May"      , "June"    , "July"    , "August",
                                "September", "October" , "November", "December"};

int DayOfYear::dayPerMonth[]= {31,28,31,30,31,30,31,31,30,31,30,31}; 


DayOfYear::DayOfYear(int day)
{
    this -> day = day;
    setMonth();
}

string DayOfYear::getMonthName(int& month)
{
    return monthName[month];
}
void DayOfYear::setMonth()
{
    int tempMonth = 0;//Holds a temporary value of month while it's being incremented 
    int tempDay   = day;//Holds the value of while it is being decremented 
    bool isTrue = true; //isTrue is used to exit the do while loop
    
    do
    {
    if(tempDay > dayPerMonth[tempMonth])
    {
        cout << dayPerMonth[tempMonth] << endl;
        
        tempDay -= dayPerMonth[tempMonth];
        tempMonth++;
        if(tempDay <= dayPerMonth[tempMonth])
        {
            day = tempDay;
            cout << day << endl;
            month = tempMonth;
            cout << month << endl;
            isTrue = false;
        }
    }
    }
    while(isTrue);
}

void DayOfYear::print()
{
    cout << month << endl;
    cout << getMonthName(month) << endl;
    cout << " " << day << "." << endl;
}


int numObtainer()
{
    int val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0 && val <= 365)
        {
            return val;
        }
        cout << "ERROR!!! Please enter a positive integer value between 1 and 365!"
                << endl;
    }
    while(true);
}
int main()
{
    int userInput;
    cout << "Enter a number of days (between 1 and 365): ";
    userInput = numObtainer();
    DayOfYear Date(userInput);
    Date.print();    
    return 0;
}
    
