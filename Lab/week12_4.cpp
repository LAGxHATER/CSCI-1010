//Noah Warren
//CSCI 1010 002 
//Lab 12, Problem 4 
//Harmonic number array
#include <iostream> 

using namespace std;

int main()
{
    double harmonic[20];

    //set the first harmonic number
    harmonic[0] = 1;
    
    cout << harmonic[0] << " ";

    for(int i = 1; i < 20; i++)
    {
        harmonic[i] = harmonic[i - 1] + harmonic[0] / (i + 1);
        cout << harmonic[i] << " ";
    }



}