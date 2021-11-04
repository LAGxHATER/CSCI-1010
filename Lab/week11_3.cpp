//Noah Warren
//CSCI 1010 002 
//Lab 11, Problem 3
//Convert binary number to decimal 
#include <iostream> 
#include <math.h>

using namespace std;

int main()
{
    int binaryNum;
    int decimalNum = 0;
    int rem;
    int i = 0;

    cout << "Enter a binary number: ";
    cin >> binaryNum;

    
    do 
    {
        //gets first digit of binary number and updates binary number to delete that digit
        rem = binaryNum % 10;
        binaryNum = binaryNum / 10;
        decimalNum += rem * pow(2,i);
        ++i;
    }
    while(binaryNum != 0);
  
    cout << "The equivalent decimal value is: " << decimalNum;
}