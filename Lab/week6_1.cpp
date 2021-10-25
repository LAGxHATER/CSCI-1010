#include<iostream>
#include<math.h> 

using namespace std; 

int main(){

//declare variables
double temp;
double velocity; 
double windChill; 

//ask user input for variable: temp
cout << "Enter temperature: " << endl; 
cin >> temp; 

//ask user input for variable: velocity
cout << "Enter velocity: " << endl; 
cin >> velocity;

//equation for effective temperature 
windChill = 35.74 + (0.6215 * temp) + ((0.4275 * temp) - 35.75) * pow(velocity, 0.16); 

//print effective temperature
cout << "The effective temperature is: " << windChill; 


}