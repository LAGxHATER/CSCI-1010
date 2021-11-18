//Noah Warren
//CSCI 1010 002 
//Lab 12, Problem 3
//
#include <iostream>

using namespace std;

int main()
{
    int numbers[10];
    int sum = 0;
    int mean;
    int greaterMean = 0;
    int lessMean = 0;

    cout << "Enter 10 integers: ";

    //puts all numbers in array and sums them all up
    for(int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
        
    }

    //determines mean using complete sum
    mean = sum / 10;
 
    for(int i = 0; i < 10; i++)
    {
        if(numbers[i] > mean)
        {
            greaterMean++;
        }
        else if(numbers[i] < mean)
        {
            lessMean++;
        }
    }

    cout << "The mean value is: " << mean << endl;
    cout << greaterMean << " elements are greater than the mean" << endl;
    cout << lessMean << " elements are less than the mean" << endl;

}

    