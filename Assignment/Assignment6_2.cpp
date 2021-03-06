//Noah Warren
//CSCI 1010 002
//Assignment 6, Problem 2
//Find riddler addresses that meet specific requirements
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //four digits
    int a, b, c, d;
    int address;
    vector<int> holdPrevAddress (1);

    while(true)
    {
        //assign random 1 digit number to each
        a = rand() % 10;  
        b = rand() % 10;
        c = rand() % 10;  
        d = rand() % 10;

        //set value of address
        address = (a * 1000) + (b * 100) + (c * 10) + d;

        //stop loop from repeating same outputs by seeing if address is anywhere in vector
        if(count(holdPrevAddress.begin(), holdPrevAddress.end(), address))
        {  
            break;
        }
        

        //print address if it meets requirements
        if((c * 3 == a) && (d % 2 == 1) && (a + b + c + d == 27))
        {
            cout << "The Riddler will strike at: " << address << " Pennsylvania Avenue" << endl;  
            
            //adds value on the end of vector
            holdPrevAddress.push_back(address);
        } 
    }
}