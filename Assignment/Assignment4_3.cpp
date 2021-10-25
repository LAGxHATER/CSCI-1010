//Noah Warren
//CSCI 1010 002
//Assignment 4, Problem 3
//Displays tax due based on taxable income
#include<iostream> 

using namespace std; 

int main()
{
    //declare variables
    double income;
    double taxDue;

    //ask user for income
    cout << "Enter the income: " << endl; 
    cin >> income; 

    //determine tax due based on income brackets 
    if(income > 5250)
    {
        taxDue = 142.5 + ((income - 5250) * 0.05); 
    }
    else if(income >= 3750)
    {
        taxDue = 82.5 + ((income - 3750) * 0.04);
    }
    else if(income >= 2250)
    {
        taxDue = 37.5 + ((income - 2250) * 0.03); 
    }
    else if(income >= 750)
    {
        taxDue = 7.5 + ((income - 750) * 0.02);
    }
    else
    {
        taxDue = income * 0.01;
    }

    //print amount of tax due 
    cout << "The tax due is: " << taxDue;
}