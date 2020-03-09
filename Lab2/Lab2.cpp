/*
 *      Lab2
 *      4/18/2019
 */
#include <iostream> 
#include <cstdlib>

using namespace std;

int* shiftArray (int* &a, int size)
{
    
    int* aPtr = new int[size+1];
    
    for(int i=0; i < size +1; i++ )
    {
        aPtr[size+1] = *a;
        
    }
    
    a[0]=0;
    
    for(int i=0; i < size +1; i++ )
    {
       *a = aPtr[size+1]; 
    }
    
    
    return a;
}


int main()
{   
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    int* a;
    
    for(int i=0; i < size+1; i++)
    {
        a[i] = rand()%100;
    }
          
    cout << "The array before: ";
    
    for (int i=0; i<size +1; i++ )
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    
   shiftArray(a,size);
    
     cout << "The array after: ";
    
    for (int i=0; i<size +1; i++ )
    {
        cout << a[i] << " ";
    }
    return 0;
}

