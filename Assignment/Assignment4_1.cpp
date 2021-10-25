//Noah Warren
//CSCI 1010 002
//Assignment 4, Problem 1
//Determine if character is a vowel
#include<iostream> 

using namespace std; 

int main(){

    //declare variable
    char userChar; 

    //ask user for a lowercase character
    cout << "Please enter a lower case character: " << endl; 
    cin >> userChar; 

    //if the user entered a character that is either: a,e,i,o,u, print is a vowel; if it is not those characters, it is not a vowel
    if(userChar == 'a' || userChar == 'e' || userChar == 'i' || userChar == 'o' || userChar == 'u')
    {
        cout << userChar << " is a vowel";
    }
    else 
    {
        cout << userChar << " is not a vowel"; 
    }
}