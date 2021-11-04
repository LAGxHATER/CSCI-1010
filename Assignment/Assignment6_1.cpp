//Noah Warren
//CSCI 1010 002
//Assignment 6, Problem 1
//let a user enter 10 numbers and print how many > 60
#include <iostream>

using namespace std;

int main()
{
    int n;
    //has to start at zero, user may enter no number > 60
    int greaterThan60 = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter a number: ";
        cin >> n;

        if(n > 60)
        {
            greaterThan60++;
        }
    }
    cout << "There are " << greaterThan60 << " numbers greater than 60" << endl;
}