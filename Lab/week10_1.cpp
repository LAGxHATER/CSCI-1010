//Noah Warren
//CSCI 1010 002
//Lab 10, Problem 1
//Looping square and square root calculator
#include<iostream>
#include<math.h>

using namespace std; 

int main(){

    char option; 
    int a;
    int total; 

    //loop
    while(true){

        cout << "****SCIENTIFIC CALCULATOR****\n"; 
        cout << "1, Squared\n";
        cout << "2. Square root\n";
        cout << "3. Exit\n";

        //ask user for option
        cin >> option;

        //if option is 3 then exit loop
        if(option == '3')
        {
            break;
        }

        //ask user for number
        cout << "Enter a number: "; 
        cin >> a; 

        //if they chose option 1, square the nuber, if option 2 sqrt the number, option 3 error message
        switch(option)
        {
                case '1': 
                    total = pow(a,2);
                    cout << a << "^2 is " << total << endl;
                    break;
                
                case '2': 
                    total = sqrt(a);
                    cout << "Sqrt of " << a << " is " << total << endl;
                    break;
                
                default: 
                    cout << "You did not select a number from the menu!\n";
                    break;

        }
    } 
}