//Noah Warren
//CSCI 1010 002
//Lab 11, Problem 4
//print all even squares between 1 and n 
#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    //i needs to start as even and stay even (i = 2 and i += 2)
    for(int i = 2; i * i <= n; i+= 2) 
    {
        //print out the squares
        cout << i * i << "\t"; 
    }
}