//Noah Warren
//CSCI 1010 002
//Assignment 8, Problem 1
//Make compute gpa function that uses two char arrays to return gpa
#include <iostream>

using namespace std;

double compute_GPA(char grades[], int size);

int main()
{
//declare and initialize the char arrays, size variables for function use
char studentA[] = {'A', 'A', 'B', 'A', 'D', 'C', 'A', 'A'};
char studentB[] = {'B', 'B', 'D', 'F', 'A', 'A', 'B', 'A', 'A', 'D', 'A', 'B'};
int sizeA = 8; 
int sizeB = 12; 

//call function for each array
cout << "Student A's GPA: " << compute_GPA(studentA, sizeA) << endl;
cout << "Student B's GPA: " << compute_GPA(studentB, sizeB) << endl;
}

double compute_GPA(char grades[], int size)
{
    //initialize total as 0;
    double total = 0; 
    double gpa; 

    for(int i = 0; i < size; i++)
    {
        switch(grades[i])
        {
        case 'A': 
            total += 4; 
            break;

        case 'B':
            total += 3;
            break;
 
        case 'C': 
            total += 2;
            break;
  
        case 'D':
            total += 1;
            break;

        case 'F':
            total += 0;
            break;
        }
    }
    //gpa is the total number of points divided by the amount of letters
    gpa = total / size; 
    return gpa;
}
