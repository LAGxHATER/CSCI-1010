//FINDING THE SINGLE NUMBER IN AN ARRAY
#include <iostream>

using namespace std;

const int SIZE = 7;

bool checkFunction(int temp);

int arr[SIZE] = {2,2,2,1,1,1,8};


int main()
{
    for (int i = 0; i < SIZE; i++)
    {
        if(checkFunction(arr[i]))
        {
            cout << "The single number is: " << arr[i];
        }   
    }
} 
    
bool checkFunction(int temp)
{
    int temp1 = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] == temp)
        {
        temp1++;
        }
        
    }
    if(temp1 > 1)
        {
            return false;
        }
            else;
        {
            return true;
        }
}