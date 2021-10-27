//Noah Warren
//CSCI 1010 002
//Assignment 5, Problem 1
//Let user enter numbers and sum up the even ones
#include<iostream>

using namespace std;

int main()
{
    //initialize sum to 0 to give it a value to start at
    int userNum;
    int sum = 0;

    //ask user for numbers
    cout << "Enter numbers, end by 0: ";
    cin >> userNum;

    //check if number is 0 
    while(userNum != 0)
    {
        //if to check if number is even
        if(userNum % 2 == 0)
        {
            sum += userNum;
        }
        cin >> userNum;
    }

    //print out sum
    cout << "The sum of the even numbers is: " << sum;
}