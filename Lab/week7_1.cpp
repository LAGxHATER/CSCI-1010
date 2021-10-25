// Noah Warren
// CSCI 1010 002
// Lab 7, Problem 1 
// Determine if 3 angles can form a triangle

#include<iostream> 

using namespace std; 

int main(){

    // Declare variables
    double angle1;
    double angle2;
    double angle3; 
    double sum; 

    // Ask user for three angle values
    cout << "Enter the value for three angles: " << endl; 
    cin >> angle1, angle2, angle3; 

    // Equation for sum of all values
    sum = angle1 + angle2 + angle3; 

    // If sum = 180 then print: it is a triangle. If not, print: it is not a triangle
    if(sum == 180){
        cout << "it's a triangle!" << endl; 
    }
    else
    {
        cout << "it's not a triangle!" << endl; 
    }

    return 0; 
}