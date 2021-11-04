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

        //stop loop from repeating same outputs
        if(count(holdPrevAddress.begin(), holdPrevAddress.end(), address))
        {  
            break;
        }
        

        //print address if it meets requirements
        if((c * 3 == a) && (d == 1 || d == 3 || d == 5 || d == 7 || d == 9) && (a + b + c + d == 27))
        {
            cout << "The Riddler will strike at: " << address << " Pennsylvania Avenue" << endl;  
            holdPrevAddress.push_back(address);
        } 
    }
}