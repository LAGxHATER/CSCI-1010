//Noah Warren
//CSCI 1010 002
//Lab 9, Problem 2
//Rock paper scissors game 
#include<iostream>

using namespace std;

int main()
{
    char player1;
    char player2; 

    //ask each player for their choice
    cout << "Player 1, show your choice: ";
    cin >> player1;
    cout << "Player 2, show your choice: ";
    cin >> player2;

    //if else statements to determine who wins and print outcome
    if(player1 == 'r' || player1 == 'R')
    {
        if(player2 == 'p' || player2 =='P')
        {
        cout << "Player 2 wins!\n";
        }
        else if(player2 == 's' || player2 == 'S')
        {
            cout << "Player 1 wins!\n";
        }
        else
        {
            cout << "Nobody wins!\n";
        }
    }
     
    if(player1 == 'p' || player1 == 'P')
    {
        if(player2 == 'r' || player2 == 'R')
        {
            cout << "Player 1 wins!\n"; 
        }
        else if(player2 == 's' || player2 == 'S')
        {
            cout << "Player 2 wins!\n";
        }
        else
        {
            cout << "Nobody wins!\n";
        }       
    }

    if(player1 == 's' || 'S')
    {
        if(player2 == 'p'|| player2 == 'P')
        {
            cout << "Player 1 wins!\n";
        }
        else if(player2 == 'r' || player2 == 'R')
        {
            cout << "Player 2 wins!\n";
        }
        else
        {
            cout << "Nobody wins!\n";
        }
    }
}
