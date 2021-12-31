//Noah Warren
//CSCI 1010 002
//Assignment 8, Problem 2
//Write a function that computes a certain polynomial
#include <iostream>
#include <math.h>

using namespace std;

double polynomial(int x);

int main()
{
    //ask user for value to insert
    int x;
    cout << "Enter a value for x: ";
    cin >> x;

    //print out value of polynomial by calling function
    cout << "The value of the polynomial is: " << polynomial(x);
}

double polynomial(int x)
{
    double value; 
    //polynomial converted to fit format
    value = (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - pow(x, 2) + (7*x) - 6;
    
    return value; 
}