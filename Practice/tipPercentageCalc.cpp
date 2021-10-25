#include<iostream> 

using namespace std; 

int main(){

    double tipPercent;
    double amountOfPeople;
    double costBeforeTip;
    double costForIndividual; 
    double costAfterTip;

    cout << "Enter bill amount: ";
    cin >> costBeforeTip;
    cout << "Enter tip percent ";
    cin >> tipPercent; 
    cout << "Enter amount of people ";
    cin >> amountOfPeople;

    costAfterTip = (costBeforeTip * tipPercent);
    costForIndividual = costAfterTip / amountOfPeople; 

    cout << "The amount for each person is " << costForIndividual; 


}