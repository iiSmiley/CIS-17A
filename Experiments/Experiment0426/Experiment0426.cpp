/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #3 Exercise#3
 *    PROBLEM DEFINITION: Movie Data
 * 
 *                  DATE: 04/26/2019
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
#include <cstring>
#include <iomanip>
using namespace std;

int const SIZE = 12;
int const WD = 20;
string const MONTH []= { "January"  , "February", "March"   , "April",
                         "May"      , "June"    , "July"    , "August",
                         "September", "October" , "November", "December"};

enum Month
{
    January, February, March, April, May, June, July, August, September,
    October, November, December
};

struct WeatherStat 
{
    double rain;
    double htemp;
    double ltemp;
    double atemp;
};

double valueObtainer()
{
    do
    {
    double userVal = 0;
    bool isGood = cin >> userVal;
    if(isGood && userVal<=140 && -100<=userVal)
    {
        return userVal;
    };
    cout << "ERROR!!! Please enter a real value between -100 and 140 degrees F"
            << endl;
    cin.clear();
    cin.ignore(1000,'\n');
    }
    while(true);
}

double rainObtainer()
{
    do
    {
    double userVal = 0;
    bool isGood = cin >> userVal;
    if(isGood && userVal>=0)
    {
        return userVal;
    };
    cout << "ERROR!!! Please enter a real value"
            << endl;
    cin.clear();
    cin.ignore(1000,'\n');
    }
    while(true);
}

void intializer(WeatherStat*& aPtr, int size)
{
    for(int i=0; i<size; i++)
    {
    cout << "For " << MONTH[i] << ", please enter" << endl;
    cout <<"The Total Rain Fall (in inches): ";
    aPtr[i].rain = rainObtainer();
    cout <<"The Highest Recorded Temperature (in Fahrenheit): ";
    aPtr[i].htemp = valueObtainer();
    cout << "The Lowest Recorded Temperature (in Fahrenheit): ";
    aPtr[i].ltemp = valueObtainer();
    aPtr[i].atemp = ((aPtr[i].htemp+aPtr[i].ltemp)/2);
    }
    
}

double lowest(WeatherStat* aPtr,int size, int& month)
{
    double lowest=aPtr[0].htemp;
    
    for(int i=0; i<size; i++)
    {
        if(aPtr[i].ltemp < lowest)
        {
            lowest = aPtr[i].ltemp;
            month = i;
        }
    }
    
    cout << lowest << "in " << month << endl;
    return lowest;
}

double highest(WeatherStat* aPtr,int size, int& month)
{
    double highest=aPtr[0].htemp;
    
    for(int i=0; i<size; i++)
    {
        if(aPtr[i].htemp > highest)
        {
            highest = aPtr[i].htemp;
            month = i;
        }
    }
    
    cout << highest << "in " << month << endl;
    return highest;
}

double aveRain (WeatherStat* aPtr,int size)
{
    double tot=0;
    for(int i=0; i<size; i++)
    {
        tot += aPtr[i].rain;
    }
    
    return tot/size;
}

double totRain (WeatherStat* aPtr,int size)
{
    double tot=0;
    for(int i=0; i<size; i++)
    {
        tot += aPtr[i].rain;
    }
    
    return tot;
}

double aveTot (WeatherStat* aPtr,int size)
{
    double tot=0;
    for(int i=0; i<size; i++)
    {
        tot += aPtr[i].atemp;
    }
    
    return tot/size;
}

void output( double aveRain, double totRain, double high, int mHigh,
             double low, int mLow, double aveTot)
{
        cout << "The average monthly rainfall   : " << setprecision(4) <<
                aveRain << endl;
        cout << "The total rainfall for the year: " << setprecision(4) <<
                totRain << endl;
        cout << "The highest temperature was    : " << setprecision(4) <<
                high << endl;
        cout << "Occurred in: "  << MONTH[mHigh] << endl;
        cout << "The lowest temperature was     : " << setprecision(4) <<
                low << endl;
        cout << "Occurred in: " << MONTH[mLow] << endl;
        cout << "The average monthly temperature: " << setprecision(4) <<
                aveTot << endl;
        
}
/*HW3.2
 * 
int const SIZE = 100;
string const MONTH []= { "January"  , "February", "March"   , "April",
                         "May"      , "June"    , "July"    , "August",
                         "September", "October" , "November", "December"};

void spaceFinder(char* cPtr, int*& oPtr, int strLen, int& iteration)
{
    for(int i=0; i<strLen; i++)
    {
        if(cPtr[i]==' ')
        {
            oPtr[iteration]=i;
            iteration++;
        }
    }

};

void output (char* nPtr, int strLen)
{
    for(int i=0; i< strLen+1; i++)
    {
        cout << nPtr[i];
    }
    cout << ".";
}

void slice(char* aPtr, char*& fName, char*& mName, char*& lName, int* oPtr,
           int strLen)
{
    int j=0;
    int l=0;
    
        for(int i=0; i<oPtr[0]; i++)
    {
        fName[i]=aPtr[j];
                j++;
                //cout << first[i];
    }
        for(int i=0; i<(oPtr[1]-oPtr[0]); i++)
    {
        mName[i]=aPtr[j];
                j++;
                //cout << first[i];
    }
    j++;
        for(int i=0; i<strLen; i++)
    {
        lName[i]=aPtr[j];
                j++;
                l++;
                //cout << first[i];
    }   
}

void arrange(char*& arrPtr, char* fName, char* mName, char* lName, int* oPtr,
           int strLen)
{
    int j=0;
    
            for(int i=0; i<(strLen-oPtr[1]); i++)
    {
            arrPtr[j] = lName[i];
            j++;
    }
            arrPtr[j]=',';
            j++;
            arrPtr[j]=' ';
        for(int i=0; i<oPtr[0]; i++)
    {
            arrPtr[j]=fName[i];
            j++;
    }
        for(int i=0; i<oPtr[1]; i++)
    {
            arrPtr[j]=mName[i];
            j++;
    }
    
}
 */
/*
struct MovieData
{
    string title;
    string director;
    string year;
    string time;
};

void obtainer(MovieData*& aPtr, int size)
{

    for (int i=0; i < size; i++)
    {
        cout << "For movie #" << i+1 << " enter" << endl;
    
            cout << "Title: ";
            cin >> aPtr[i].title;
            cout << "Director: ";
            cin >> aPtr[i].director;
            cout << "year: ";
            cin >> aPtr[i].year;
            cout << "Running time: ";
            cin >> aPtr[i].time;
    }   
}

void programHeader()
{
    cout << "|||The Tigers' Movies Database|||" << endl;
}

void output(MovieData* aPtr, int size)
{
    
            cout << "#n |";
            cout << setw(WD) << left << "Title" << "|";
            cout << setw(WD) << left << "Director" << "|";
            cout << setw(WD) << left << "Year" << "|";
            cout << setw(WD) << left << "Running Time" << "|" <<endl;
                
            for(int i=0; i<size; i++)
        {
            cout << setw(2) << left << "#" << i+1 << "|"; 
            cout << setw(WD) << left << aPtr[i].title << "|";
            cout << setw(WD) << left << aPtr[i].director << "|";
            cout << setw(WD) << left << aPtr[i].year << "|";
            cout << setw(WD) << left << aPtr[i].time << "|" << endl;
        }
}
 * */
int main()
{   /*
    string date;
    cout << "Enter a date in the format mm/dd/yyyy: ";
    
    getline(cin,date);
    
    int month = atoi(date.substr(0,2).c_str());
    int day = atoi(date.substr(3,5).c_str());
    int year = atoi(date.substr(6).c_str());
    cout <<  MONTH[month-1] << " " <<day << ", " << year;
    */
    /*
    int iteration = 0;
    char* name = new char[SIZE];
    int* offSet = new int[SIZE];
    cout << "Enter your name: ";
    
    cin.getline(name,SIZE);
    int strLen = strlen(name);
    
    spaceFinder(name, offSet, strLen, iteration);
    
    char* first = new char[SIZE];
    char* middle= new char[SIZE];
    char* last = new char[SIZE];
    
    slice(name, first, middle, last, offSet, strLen);
    
    char* arranged = new char[SIZE];
    
    arrange(arranged, first, middle, last, offSet, strLen);
    output(arranged, strLen);
    */
    /*
    programHeader();
    MovieData* list = new MovieData[SIZE];
    
    obtainer(list, SIZE); 
    output(list,SIZE);
    */
    int highMonth = 0;
    int lowMonth  = 0;
    double aveR= 0;
    double totR= 0;
    double low = 0;
    double high= 0;
    double aveT = 0;
    
    WeatherStat* list = new WeatherStat[SIZE];
    intializer(list, SIZE);
    
    low = lowest(list, SIZE, lowMonth);
    high= highest(list, SIZE, highMonth);
    totR= totRain(list, SIZE);
    aveR= aveRain(list, SIZE);
    aveT= aveTot(list, SIZE);
    
    output(aveR, totR, high, highMonth, low, lowMonth, aveT);
    

    return 0;
}

