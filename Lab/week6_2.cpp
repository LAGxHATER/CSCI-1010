#include<iostream> 
#include<math.h> 

using namespace std; 

int main(){

    //delcare variables
    int totalDollars;
    int numOf20;
    int numOf10;
    int numOf5;
    int numOf1;

    //ask user for amount total in dollars for: totalDollars
    cout << "Enter amount of USD: " << endl;
    cin >> totalDollars;

    //equations for calculating number of each bill 
    numOf20 = totalDollars / 20;
    numOf10 = (totalDollars % 20) / 10;
    numOf5 = (totalDollars % 10) / 5; 
    numOf1 = (totalDollars % 5) / 1; 

    //printing out numbers of each bill
    cout << numOf20 << endl; 
    cout << numOf10 << endl;
    cout << numOf5 << endl;
    cout << numOf1 << endl; 

}