//Noah Warren
//CSCI 1010 002 
//Assignment 4, Problem 4 
//Determine whether a year is a leap year or not
#include<iostream> 

using namespace std; 

int main()
{
    //declare variable
    int year; 

    //ask user for a year
    cout << "Enter a year: " << endl; 
    cin >> year; 

    //algorithms for finding is a year is a leap year or common year. Print to screen if it is common or leap. 
    if(year % 4 != 0)
    {
        cout << "It's a common year";
    }
    else if(year % 100 != 0)
    {
        cout << "It's a leap year";
    }
    else if(year % 400 != 0)
    {
        cout << "It's a common year";
    }
    else 
        cout << "It's a leap year";
}