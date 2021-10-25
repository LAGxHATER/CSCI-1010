//Noah Warren
//CSCI 1010 002
//Lab 8, Problem 2
//Turn two digit number into English word
#include<iostream> 

using namespace std;

int main(){

    //declare variables
    int userNum;
    int firstNum;
    int secondNum;

    //ask user for two digit number
    cout << "Please enter a two digit integer (>=20): " << endl; 
    cin >> userNum;
    
    //seperating the two digit number
    firstNum = userNum / 10;
    secondNum = userNum % 10; 

    //printing for first number
    switch(firstNum){

        case 2:
            cout << "twenty-";
            break;

        case 3: 
            cout << "thirty-";
            break; 

        case 4: 
            cout << "fourty-";
            break;

        case 5: 
            cout << "fifty-";
            break;

        case 6: 
            cout << "sixty-";
            break;

        case 7: 
            cout << "seventy-";
            break;

        case 8: 
            cout << "eighty-"; 
            break;
        
        case 9: 
            cout << "ninety-"; 
            break;

    }
    //printing for second number
    switch(secondNum){

        case 1: 
            cout << "one"; 
            break;

        case 2:
            cout << "two";
            break;

        case 3: 
            cout << "three";
            break; 

        case 4: 
            cout << "four";
            break;

        case 5: 
            cout << "five";
            break;

        case 6: 
            cout << "six";
            break;

        case 7: 
            cout << "seven";
            break;

        case 8: 
            cout << "eight"; 
            break;
        
        case 9: 
            cout << "nine"; 
            break;

    }

}