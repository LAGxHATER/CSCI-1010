#include<iostream>

using namespace std;

int main()
{
    //declare variables
    int num1, num2, num3, num4;
    int largestNum;
    int smallestNum;
    int largest1;
    int largest2;
    int smallest1;
    int smallest2;

    //ask user for four integers
    cout << "Please enter four integers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    //finding the largest and smallest between num1 and num2
    if(num1 > num2)
    {
        largest1 = num1;
        smallest1 = num2;
    }
    else
    {
        largest1 = num2;
        smallest1 = num1;
    }

    //finding the largest and smallest between num3 and num4 
    if(num3 > num4)
    {
        largest2 = num3;
        smallest2 = num4;
    }
    else
    {
        largest2 = num4;
        smallest2 = num3;
    }

    //finding the largest number between the two previous compared
    if(largest1 > largest2)
    {
        largest1 = largestNum;
    }
    else
    {
        largest2 = largestNum;
    }

    //finding the largest number between the two previous compared
    if(smallest1 < smallest2)
    {
        smallest1 = smallestNum;
    }
    else
    { 
        smallest2 = smallestNum;
    }

    //printing out the largest and smallest number
    cout << "The largest number is: " << largestNum << endl;
    cout << "The smallest number is: " << smallestNum << endl; 


}