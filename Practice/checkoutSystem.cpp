#include<iostream>

using namespace std; 

int main()
{
    double totalCost;
    double taxRate;
    double amountSpent; 
    double discount;
    taxRate = 1.08;


    cout << "Enter amount spent: " << endl; 
    cin >> amountSpent;

    if(amountSpent >= 500)
    {
        discount = 0.25;
    }
    else
    {
        discount = 0.15; 
    }
    
    totalCost = (amountSpent - amountSpent * discount) * taxRate;

    cout << totalCost; 
}