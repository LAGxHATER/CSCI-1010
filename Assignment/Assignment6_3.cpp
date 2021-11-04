#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    int grades[10];
    //created a counter for the grade number
    int counter = 1;
    //set highest to 0 and lowest to 101 so I do not have to initialize it later with grades[i];
    int highest = 0;
    int lowest = 101;
    int mean = 0;

    for(int i = 0; i <= 9; i++)
    {
        
        cout << "Enter grade " << counter << ": ";
        cin >> grades[i];
        counter++;
        //all grades must be added to form a mean
        mean += grades[i];

        if(grades[i] > highest) 
        {
            highest = grades[i];
        }

        if(grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }

    cout << "The highest grade is: " << highest << endl;
    cout << "The lowest grade is: " << lowest << endl;
    //remember to divide by 10 to get correct mean
    cout << "The mean grade is: " << mean / 10 << endl;
}