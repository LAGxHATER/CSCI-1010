#include<iostream> 
#include<math.h> 

using namespace std; 

int main(){

//declare variables 
int x;
int y;
double distance; 

//ask user for variable values for point
cout << "Enter two numbers for a point x and y: " << endl;
cin >> x >> y; 

//equation for distance from point to origin
distance = sqrt(pow(x,2) + pow(y,2));

//print out distance of point
cout << "The distance of point (" << x << "," << y << ") to the origin point is: " << distance << endl; 

}