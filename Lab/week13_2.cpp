//Noah Warren
//CSCI 1010 002
//Lab 13, Problem 2
//Array stuff
#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n - i - 1; j++)
        if (arr[j] < arr[j+1])
            swap(arr[j], arr[j + 1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 

int main()
{
    int arr[100];
    int size = 8;
    int pos = 0;
    int x = 18;

    //loop to enter values of array
    cout << "Enter " << size << " numbers for the array: ";

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    //loop to print elements of array
    cout << "Now the elements in the array: ";
    printArray(arr, size);

    //moving values of array to the right by 1
    size++;

    for (int i = size - 1; i >= pos; i--)
    {
        arr[i]= arr[i - 1];
    }
    //inserting 18 into the array
    arr[pos] = x; 


    //printing updated array
    cout << "\nAfter inserting 18 as the first element: ";
    printArray(arr, size);
        
    //sorting array descending order
    bubbleSort(arr, size);
    
    cout << "\nAfter sorting the array in descending order: ";
    printArray(arr, size);

    

    




    
}