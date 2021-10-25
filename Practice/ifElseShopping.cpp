#include<iostream>

using namespace std;

int main(){

    //declare variables
    double amountSpent;
    double total;

    //ask user for amount spent
    cout << "Enter amount spent: " << endl; 
    cin >> amountSpent;

    //statements to determine discount total 
    if(amountSpent >= 100)
    {
        total = amountSpent - 30;
    }
    else if (amountSpent >= 75)
    {
        total = amountSpent - 20;
    }
    else if (amountSpent >= 50)
    {
        total = amountSpent - 10; 
    }
    else 
    {
        total = amountSpent;
    }
    
    //print out total after discount 
    cout << "Your total after discount will be: " << total << endl; 

    return 0; 

}