#include <iostream>

using namespace std;

int main(){

double cheeseburger;
double espresso; 
double total;
double tax;
int numOfBurgers;
int numOfEspresso;


cout << "How many cheeseburgers? ";
cin >> numOfBurgers;
cout << "How many espresso? ";
cin >> numOfEspresso;

cheeseburger = 5.89 * numOfBurgers;
espresso = 3.99 * numOfEspresso;

tax = 1.07;
total = (cheeseburger + espresso) * tax;

cout << "$" << total; 

}