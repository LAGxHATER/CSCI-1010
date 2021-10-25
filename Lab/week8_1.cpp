//Noah Warren
//CSCI 1010 002
//Lab 8, Problem 1
//Program to compute the interest due, total amount due, and the minimum payment for credit account
#include<iostream> 

using namespace std; 

int main(){

    //declare variables
    double balance; 
    double interest;
    double minimumPayment; 
    double totalDue;
    double percentOfTotal;

    //ask user for balance
    cout << "Please enter balance: " << endl;
    cin >> balance;

    //algorithm to determine interest due
    if(balance > 1000){

        interest = ((balance - 1000) * 0.01) + (1000 * 0.015);
    }
    else
    {
        interest = (balance * 0.015);
    }

    //total due and percentOfTotal equations
    totalDue = interest + balance; 
    percentOfTotal = totalDue * 0.1;

    //algorithm to determine minumum payment
    if(totalDue < 10){

        minimumPayment = 10; 
    }
    else if(percentOfTotal > 10)
    {
        minimumPayment = percentOfTotal; 
    }
    else if(percentOfTotal < 10)
    {
        minimumPayment = 10; 
    }

    //Print out interest, total due, and minimum payment
    cout << "The interest due is: " << interest << endl;
    cout << "The total amound due is: " << totalDue << endl; 
    cout << "The minimum payment due is: " << minimumPayment << endl; 
}