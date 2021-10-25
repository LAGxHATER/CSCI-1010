#include <iostream>

using namespace std;

int main(){
    double hoursWorked;
    double payrate;
    double overtimePayrate;
    double socialTax;
    double federalTax;
    double stateTax;
    double netIncome;
    double grossWages;
    int unionDues;

    payrate = 16.78;
    overtimePayrate = payrate * 1.5;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    grossWages = (payrate * hoursWorked) + (overtimePayrate * (hoursWorked - 40));

    socialTax = grossWages * 0.06;
    federalTax = grossWages * 0.14;
    stateTax = grossWages * 0.05;
    unionDues = 10;

    netIncome = grossWages - (socialTax + federalTax + stateTax - unionDues);


    cout << "Gross Pay: $" << grossWages << endl; 
    cout << "Social Security Tax: $" << socialTax << endl;
    cout << "Federal Income Tax: $" << federalTax << endl;
    cout << "State Income Tax: $" << stateTax << endl;
    cout << "Union dues: $" << unionDues << endl;
    cout << "Net income: $" << netIncome << endl;


    
}