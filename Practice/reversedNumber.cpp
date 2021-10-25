#include<iostream> 

using namespace std;

int main(){

    int userNum;
    int remainder; 
    int divisor; 

    cout << "Please enter a two digit number: ";
    cin >> userNum;

    remainder = userNum % 10;
    divisor = userNum / 10;

    cout << "The reversed number is: " << remainder << divisor; 



}