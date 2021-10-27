//Noah Warren
//CSCI 1010 002
//Lab 10, Problem 2
//Calculator that displays greatest common divisor(gcd)
#include<iostream>

using namespace std;

int main()
{
    int m;
    int n; 
    int remainder;
    int gcd;

    //user enters two integers
    cout << "Enter two ingegers: ";
    cin >> m >> n; 

    //loop
    while(true)
    {
        //if n = 0 then the gcd is m, leave the loop
        if(n == 0)
        {
            gcd = m;
            break;
        }
        //algorithm to find gcd
        else
        {
            remainder = m % n;
            m = n; 
            n = remainder; 
        }

    }
    //print gcd
    cout << "GCD: " << gcd;
}

