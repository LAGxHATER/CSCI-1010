//Noah Warren
//CSCI 1010 002
//Lab 9, Problem 3
//Determine the smallest of 3 integers. 
#include<iostream>

using namespace std; 

int main()
{
    int num1;
    int num2;
    int num3;
    int smallestNum;
    int temp;

    //user enters 3 integers
    cout << "Please enter three integers: " << endl; 
    cin >> num1 >> num2 >> num3;

    //determine what number is the smallest
    if(num1 < num2 && num1 < num3)
    {
        smallestNum = num1;
    }
        if(num2 < num1 && num2 < num3)
        {
            num2 = smallestNum;
        }
            if(num3 < num1 && num3 < num2)
            {
                num3 = smallestNum;
            }
       
        //Print smallest number to screen
        cout << "The smallest number is: " << smallestNum << endl;

        return 0;
}