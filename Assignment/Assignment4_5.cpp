//Noah Warren 
//CSCI 1010 002 
//Assgnment 4, Problem 5
//Convert letter grades to information
#include<iostream> 

using namespace std; 

int main()
{
    //delcare variable
    char letterGrade;

    //ask user for letter grade
    cout << "enter a letter grade: " << endl; 
    cin >> letterGrade; 

    //algorithm for letter grades and there corresponding information to be printed
    switch(letterGrade) {

        case 'A': 
            cout << "Execllent";
            break;

        case 'B':
            cout << "Good";
            break;

        case 'C':
            cout << "Average"; 
            break;
        
        case 'D': 
            cout << "Poor";
            break;
        
        case 'F': 
            cout << "Failing";
            break;

        default: 
            cout << "You did not enter a letter grade";

    }
}