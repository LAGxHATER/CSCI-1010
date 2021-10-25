// Noah Warren
// CSCI 1010 002
// Lab 7, Problem 3
// Amount of chocolate bars needed to maintain weight 

#include<iostream>

using namespace std;

int main(){

    // declare variables
    char sex;
    double weight; 
    double height;
    double age;
    double BMR;
    double chocolateCalories; 
    double numOfChocolate;

    chocolateCalories = 230; 
    
    // ask user for sex
    cout << "Enter M for male or F for female: " << endl; 
    cin >> sex; 

    // ask user for weight, height and age
    cout << "Enter the persons weight, height, and age: " << endl;
    cin >> weight >> height >> age; 

    /* if sex is male, use formula for male and print out how many chocolate bars can be eaten.
    if sex is female, use formula for female and print out how many chocolate bars can be eaten. */
    if(sex == 'M')
    { 
        BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age); 

        numOfChocolate = BMR / chocolateCalories; 

        cout << "You can eat " << numOfChocolate << " chocolate bars"; 
    }
    else if(sex == 'F')
    {
        BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age); 

        numOfChocolate = BMR / chocolateCalories; 

        cout << "You can eat " << numOfChocolate << " chocolate bars"; 
    }
    else 
    {
        cout << "You did not enter M or F!"; 
    }

    return 0;

}

