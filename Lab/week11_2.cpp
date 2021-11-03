//Noah Warren
//CSCI 1010 002 
//Lab 11, Problem 2 
//Count digis of an integer and print them
#include <iostream> 

using namespace std; 

int main()
{
    int n;
    int numOfDigits = 0;

    cout << "Enter an integer: "; 
    cin >> n;

    do
    {   
        //everytime you divide by 10, there is a digit
        n = n / 10;
        ++numOfDigits;
    }
    while(n != 0);

    cout << "The number of digits is: " << numOfDigits;
}