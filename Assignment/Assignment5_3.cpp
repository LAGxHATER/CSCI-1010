//Noah Warren
//CSCI 1010 002
//Assignment 5, Problem 2
//Approximate the value of Pi
#include<iostream> 

using namespace std;

int main()
{
    //set variables accordingly to make equation easier. alernator is used to go from + to - 
    bool alternator = false; 
    double pi = 0;
    double denominator = 3;
    double series = 1;

    
    while(denominator < 100000)
    {
        //the statment for the plus fraction
        if(alternator)
        {
            series = series + (1/denominator);
            //reverse the value of alternator to go to -
            alternator = !alternator;
        }
        //the statement for the minus fraction
        else
        {
            series = series - (1/denominator);
            //reverse the value of alternator to move to +
            alternator = !alternator;
        } 
        denominator += 2;
    }
    //declare new value for pi and print the value of pi
    pi = 4 * series;
    cout << "The value of Pi is: " << pi << endl;
    
    
}