//Noah Warren
//CSCI-1010 002
//Assignment 7, Problem 1
//Partially filled array practice
#include <iostream>

using namespace std;

const int SIZE = 100;

void printArray(int arr[], int size);

int main()
{
    int arr[SIZE];
    int size = 0;

    //adding user entered number to array
    cout << "Enter some numbers, ended by -1: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
        if(arr[i] == -1)
        {
            break;
        }
        else
        {
            size++;
        }
    }
    //displaying all numbers in array 
    cout << "The current elements are: ";
    printArray(arr, size);
    cout << endl;

    //finding largest number from array
    int largest = arr[0]; 
    for(int i = 0; i < size; i++)
    {
        if(arr[i + 1] > arr[i])
        {
            largest = arr[i+1];
        }
    }
    cout << "The largest number is: " << largest << endl;

    //adding 10 and 15 to the array
    for(int i = 0; i < 2; i++)
    {
        size++;
    }
    arr[size - 1] = 15;
    arr[size - 2] = 10;
    //printing array after additions
    cout << "Now the elements are: ";
    printArray(arr, size);
    cout << endl;
    
    //sorting the array in descending order
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //printing array after sort
    cout << "After sorting, the elements are: ";
    printArray(arr, size);
    cout << endl;
}


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}