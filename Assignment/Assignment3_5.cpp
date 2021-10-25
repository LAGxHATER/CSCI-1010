#include<iostream>

using namespace std;

int main() {

    int timeInSeconds;
    int hours;
    int minutes;
    int seconds; 

    cout << "Enter a time in seconds: " << endl; 
    cin >> timeInSeconds;

    hours = (timeInSeconds / 3600);
    minutes = (timeInSeconds % 3600) / 60;
    seconds = (timeInSeconds % 60);

    cout << "The time is " << hours << " hours, " << minutes << " minutes, " << "and " << seconds << " seconds";


}