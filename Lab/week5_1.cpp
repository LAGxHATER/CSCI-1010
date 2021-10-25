#include <iostream> 

using namespace std;

int main() {
    double radius;
    double height; 
    double volume; 

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter height: ";
    cin >> height; 

    volume = 3.14 * (radius * radius) * height;

    cout << "The volume is " << volume << endl; 



}

