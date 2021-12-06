#include <iostream>
#include <string>

using namespace std;

string names[100];
int grades[100];
int id[100];
int counter = 0;

void menu();
void addStudent();
void printAllStudents();
void gradeStatistics();
void removeStudent();
void searchStudent();

int main()
{
menu();
}

void menu()
{
    cout << "***CSCI 1010 Student Information Managment System***\n";
    cout << "1. Add Student\n";
    cout << "2. Search By ID\n";
    cout << "3. Grades Statistics\n";
    cout << "4. Remove a Student\n";
    cout << "5. Print all students\n";
    cout << "6. Exit the system\n";

    int opt; 
    cin >> opt;

    if(opt < 1 || opt > 6)
    {
        cout << "Error: Option does not exist" << endl;
        menu();
    }
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

void addStudent()
{
    if(counter > 100)
    {
        cout << "Error: Cannot have more than 100 students" << endl;
        menu();
    }

    id[counter] = counter + 1;
    cout << "The ID for the new student is: " << counter + 1;
    cout << "\nPlease enter the student's name (Lastname,Firstname): ";
    cin >> names[counter];

    cout << "\nPlease enter the grade of the student: ";
    cin >> grades[counter];

    counter++;

    menu();
}

void searchStudent()
{
    int studentID;

    cout << "Enter the ID of the student: ";
    cin >> studentID;

    if(studentID != id[studentID-1])
    {
        cout << "Error: ID does not exist" << endl;
        menu();
    }
    cout << "Student ID: " << id[studentID-1] << endl;
    cout << "Student Name: " << names[studentID-1] << endl;
    cout << "Student Grade: " << grades[studentID-1] << endl;

    menu();
}

void gradeStatistics()
{
    int highest = 0;
    int lowest = 101;
    int total = 0;
    int average;

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
    average = total / counter;

    cout << "The highest grade is: " << highest << endl;
    cout << "The lowest grade is: " << lowest << endl;
    cout << "The average grade is " << average << endl;

    menu();
 }

void removeStudent()
{
    int studentID;
    cout << "Please enter the ID: ";
    cin >> studentID;

    if(studentID != id[studentID-1])
    {
        cout << "Error: ID does not exist" << endl;
        menu();
    }
    for(int i = 0; i < counter; i++)
    {
        if(studentID != id[i])
        {
            names[i - 1] = names[i];
            grades[i - 1] = grades[i];
        }
    }
    counter--;
    menu();
}

void printAllStudents()
{
    cout << "ID\tName\t\tGrade" << endl;
    for(int i = 0; i < counter; i++)
    {
        cout << id[i] << "\t" << names[i] << "\t" << grades[i] << endl;
    }
    menu();
}

