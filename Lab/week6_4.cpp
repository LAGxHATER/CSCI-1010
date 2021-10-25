#include<iostream> 
#include<math.h> 

using namespace std; 

int main(){

    //declare variables
    int d;
    int m;
    int y;
    int x;
    int y0;
    int m0;
    int d0;

    //ask users for variable inputs for year, month, and day
    cout << "Please enter a four digit number for year: ";
    cin >> y; 

    cout << "PLease enter a number for month, use 1 to 12 to represent Jan to Dec: ";
    cin >> m; 

    cout << "Please enter a number for day, 1 to 31: ";
    cin >> d; 

    //equations for gregorian calender
    y0 = y - (14 - m) / 12;
    x = y0 + y0 / 4 - y0 / 100 + y0 / 400; 
    m0 = m + 12 * ((14 - m) / 12) - 2;
    d0 = (d + x + (31 * m0) / 12) % 7; 

    //print out day of the week 
    cout << "The day of the week is: " << d0;


}