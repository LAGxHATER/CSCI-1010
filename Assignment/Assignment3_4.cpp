#include<iostream> 
#include<math.h>

using namespace std;

int main(){

    double x;
    double v;
    double t;
    double g;
    double displayValue;

    g = 9.80665;

    cout << "Enter value x: " << endl; 
    cin >> x;

    cout << "Enter value v: " << endl;
    cin >> v;

    cout << "Enter value t: " << endl;
    cin >> t; 

    displayValue = x + v * t - g * pow(t, 2) / 2; 

    cout << displayValue; 




}
 
