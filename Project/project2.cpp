//Raymond Elks and Noah Warren
//CSCI-1010-002
//Project 2
//Student Information Management System
#include <iostream>
#include <string>

using namespace std;

//declare arrays and counter to track size of all 3 arrays
string names[100];
int grades[100];
int id[100];
int counter = 0;

//declare all non-main functions
void menu();
void addStudent();
void printAllStudents();
void gradeStatistics();
void removeStudent();
void searchStudent();

//main function calls menu
int main()
{
menu();
}

//main menu function
void menu()
{
    //display options
    cout << "***CSCI 1010 Student Information Managment System***\n";
    cout << "1. Add Student\n";
    cout << "2. Search By ID\n";
    cout << "3. Grades Statistics\n";
    cout << "4. Remove a Student\n";
    cout << "5. Print all students\n";
    cout << "6. Exit the system\n";

    //user chooses option
    int opt; 
    cin >> opt;

    //error if opt != 1 through 6
    if(opt < 1 || opt > 6)
    {
        cout << "Error: Option does not exist" << endl;
        menu();
    }

    //switch statement for the options, each case calls its own function
    switch(opt)
    {
        case 1:
            addStudent();
            break;
            
        case 2: 
            searchStudent();
            break;
        
        case 3:
            gradeStatistics();
            break;

        case 4:
            removeStudent();
            break;

        case 5:
            printAllStudents();
            break;

        case 6: 
            break;
    }
}

//function to add a new student
void addStudent()
{
    //error if user tries to add more than 100 students
    if(counter > 100)
    {
        cout << "Error: Cannot have more than 100 students" << endl;
        menu();
    }

    //keeps the ID at +1 of the array value, as the ID should start at 1
    id[counter] = counter + 1;

    //prints ID, lets user enter name and grade of student
    cout << "The ID for the new student is: " << counter + 1;
    cout << "\nPlease enter the student's name (Lastname,Firstname): ";
    cin >> names[counter];
    cout << "\nPlease enter the grade of the student: ";
    cin >> grades[counter];

    //updates counter
    counter++;

    menu();
}

//function to search for a student by id
void searchStudent()
{
    //used for user input
    int studentID;

    //gets student ID
    cout << "Enter the ID of the student: ";
    cin >> studentID;

    //error if entered ID does not exist
    if(studentID != id[studentID-1])
    {
        cout << "Error: ID does not exist" << endl;
        menu();
    }

    //returns corresponding information based on the ID
    cout << "Student ID: " << id[studentID-1] << endl;
    cout << "Student Name: " << names[studentID-1] << endl;
    cout << "Student Grade: " << grades[studentID-1] << endl;

    menu();
}

//function to print grade statistics
void gradeStatistics()
{
    //variables used for calculation
    int highest = 0;
    int lowest = 101;
    int total = 0;
    int average;

    //for loop calculates highest, lowest, and total
    for(int i = 0; i < counter; i++)
    {
        if(grades[i] > highest)
        {
            highest = grades[i];
        }
        
        if(grades[i] < lowest)
        {
            lowest = grades[i];
        }
        total += grades[i];
    }
    //calculates average
    average = total / counter;

    //print the values
    cout << "The highest grade is: " << highest << endl;
    cout << "The lowest grade is: " << lowest << endl;
    cout << "The average grade is " << average << endl;

    menu();
}

//function to remove a student
void removeStudent()
{
    //used for user input
    int studentID;

    //gets user input
    cout << "Please enter the ID: ";
    cin >> studentID;

    //error if student ID does not exist
    if(studentID != id[studentID-1])
    {
        cout << "Error: ID does not exist" << endl;
        menu();
    }

    //for loop removes the student, moves values to the left
    for(int i = 0; i < counter; i++)
    {
        if(studentID != id[i])
        {
            names[i - 1] = names[i];
            grades[i - 1] = grades[i];
        }
    }

    //update counter
    counter--;

    menu();
}

//function to print all students with their IDs and grades
void printAllStudents()
{
    //header
    cout << "ID\tName\t\tGrade" << endl;
    //for loop gets the values from all 3 arrays and prints them
    for(int i = 0; i < counter; i++)
    {
        cout << id[i] << "\t" << names[i] << "\t" << grades[i] << endl;
    }
    menu();
}