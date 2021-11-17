//Noah Warren
//CSCI 1010 002 
//Lab 13, Problem 1
//Reverse elements of array
#include <iostream>

using namespace std;

int main()
{
    int A[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
    
    cout << "The reversed elements are: ";

    //loop to print array in reverse order
    for(int i = 9; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
}