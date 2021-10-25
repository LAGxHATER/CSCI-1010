//Noah Warren
//CSCI 1010 002
//Assignment 4, Problem 2
//Determine relationship between two integers
#include<iostream> 

using namespace std; 

int main(){

    //delcare variables
    int num1;
    int num2;

    //ask user for two integers
    cout << "Please enter two integers: " << endl; 
    cin >> num1 >> num2; 

    //3 relationships to determine between integers, then print the relationship 
    if(num1 == num2)
    {
        cout << num1 << " is equal to " << num2; 
    }
    else if(num1 > num2)
    { 
        cout << num1 << " is greater than " << num2;
    }
    else if(num1 < num2)
    {
        cout << num1 << "i s less than " << num2; 
    }
    
}