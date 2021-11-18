//Noah Warren
//CSCI 1010 002
//Lab 12, Problem 2
//Print fibonacci sequence numbers
#include <iostream> 

using namespace std; 

int main()
{
    int fibonacci[40];

    //initialize first two fibonacci numbers
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    //print this first so it does not repeat in the loop
    cout << fibonacci[0] << " " << fibonacci[1] << " ";

    for(int i = 2; i < 40; i++)
    {
        //the current fibonacci number is the previous 2 numbers added together
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        
        cout << fibonacci[i] << " ";
    }
}