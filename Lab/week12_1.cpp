//Noah Warren
//CSCI 1010 002 
//Lab 12, Problem 1
//Print 10 values of array in reverse order
#include <iostream>

using namespace std; 

int main()
{
    int numbers[10];
    

    cout << "Enter 10 numbers: ";

    //loop to enter number
    for(int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    cout << "The numbers reversed numbers are: ";
    
    //loop to reverse number
    for(int a = 9; a >= 0; a--)
    {
        cout << numbers[a] << " ";
    }
    

}