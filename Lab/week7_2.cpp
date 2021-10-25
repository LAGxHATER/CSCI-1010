// Noah Warren
// CSCI 1010 002
// Lab 7, Problem 2 
// Calculate how many digits a number contains

#include<iostream> 

using namespace std;

int main(){

    // delcare variables
    int userNum; 

    // ask user for a number 
    cout << "Enter a number, no more than 3 digits: " << endl; 
    cin >> userNum; 

    // values 100 and over are 3 digits, values 10 and over are 2 digits, anything else is one digit. 
    if(userNum >= 100){
        cout << "Three digits";
    }
    else if(userNum >= 10)
    {
        cout << "Two digits";
    }
    else 
    {
        cout << "One digit"; 
    }

    return 0;
}