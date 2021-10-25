#include<iostream>

using namespace std;

int main(){

    double numOfQuarters;
    double numOfDimes; 
    double numOfNickels;
    double Quarter = 25;
    double Dime = 10;
    double Nickel = 5;

    cout << "Number of Quarters: " << endl; 
    cin >> numOfQuarters;
    cout << "Number of Dimes: " << endl; 
    cin >> numOfDimes;
    cout << "Number of Nickels: " << endl; 
    cin >> numOfNickels;


    double quarterTotal = numOfQuarters * Quarter;
    double dimeTotal = numOfDimes * Dime;
    double nickelTotal = numOfNickels * Nickel;
    double totalCents = quarterTotal + dimeTotal + nickelTotal;

    cout << "There are " << totalCents << " in total";


}