//Noah Warren
//CSCI 1010 002 
//Lab 11, Problem 1
//User enter 10 integers, find the smallest one
#include <iostream> 

using namespace std; 

int main()

{
    int n; 
    int i;
    int smallest;

    cout << "Enter 10 numbers: ";
    

    //lets user enter up to 10 numbers
    for(i = 1; i <= 10; i++)
    {
        cin >> n;
    
        //initialize smallest number with first value entered
        if(i == 1)
        {
            smallest = n;
        }
        else
        {
            //compare all numbers to find smallest
            if(n < smallest)
            {
                smallest = n;
            }
        }
    }  
    cout << "The smallest number is: " << smallest;
}