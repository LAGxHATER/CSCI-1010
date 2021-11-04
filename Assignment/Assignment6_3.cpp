//Noah Warren
//CSCI 1010 002
//Assignment 6, Problem 3
//Let someone enter grades and return lowest, highest, and mean
#include <iostream>

using namespace std;

int main()
{
    
    int grades[10];
    //set highest to 0 and lowest to 101 so I do not have to initialize it later with grades[i];
    int highest = 0;
    int lowest = 101;
    int mean = 0;

    for(int i = 0; i <= 9; i++)
    {
        
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grades[i];
        //all grades must be added to form a mean
        mean += grades[i];

        if(grades[i] > highest) 
        {
            highest = grades[i];
        }

        if(grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }
    //remember to divide by 10 to get correct mean
    mean /= 10;

    cout << "The highest grade is: " << highest << endl;
    cout << "The lowest grade is: " << lowest << endl;
    cout << "The mean grade is: " << mean << endl;
}