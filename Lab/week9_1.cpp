//Noah Warren
//CSCI 1010 002
//Lab 9, Problem 1
//Find weights needed for total weight entered

#include <iostream>

using namespace std; 

int main()
{
    int userWeight;
    int sixteenWeight;
    int eightWeight;
    int fourWeight;
    int twoWeight;
    int oneWeight;
    
    //ask user to enter weight
    cout << "Please enter a weight: ";
    cin >> userWeight;

    //algorithm for each weight
    sixteenWeight = (userWeight / 16);
    eightWeight = (userWeight % 16) / 8; 
    fourWeight = (userWeight % 8) / 4; 
    twoWeight = (userWeight % 4) / 2; 
    oneWeight = (userWeight % 2); 
    
    //print out all weights needed
    cout << "You need" << endl;
    cout << "16-ounce weights: " << sixteenWeight << endl;
    cout << "8-ounce weights: " << eightWeight << endl; 
    cout << "4-ounce weights: " << fourWeight << endl; 
    cout << "2-ounce weights: " << twoWeight << endl; 
    cout << "1-ounce weights: " << oneWeight << endl; 
}