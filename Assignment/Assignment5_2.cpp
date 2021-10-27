//Noah Warren
//CSCI 1010 002 
//Assignment 5, Problem 2 
//Find hailstone sequence of a postive integer
#include<iostream>

using namespace std;

int main()
{
    int userNum;

    cout << "Enter an integer: ";
    cin >> userNum;
    //this statement displays the original userNum before it it altered in the sequence
    cout << userNum << ", ";

    while(userNum != 1)
    {   
        //determine if number is even or odd and do neccessary algorithm 
        if(userNum % 2 == 0)
        {
            userNum = userNum / 2;
        }
        else
        {
            userNum = (userNum * 3) + 1;
        }
        //print hailstone series
        cout << userNum << ", ";
    }
    
}