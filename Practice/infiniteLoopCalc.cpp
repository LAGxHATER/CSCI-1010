#include<iostream>
#include<math.h>

using namespace std; 

int main(){

    int option; 
    int a;
    int total; 

    while(true){

        cout << "Please select from the menu\n"; 
        cout << "1, Squared\n";
        cout << "2. Square root\n";
        cout << "3. Exit\n";

        cin >> option;

        if(option == 5)
        {
            break;
        }

        cout << "Enter a number: " << endl; 
        cin >> a; 


        switch(option)
        {
                case '1': 
                    total = pow(a,2);
                    cout << a << "^2 is " << total << endl;
                    break;
                
                case '2': 
                    total = sqrt(a);
                    cout << "Sqrt of " << a << " is " << total << endl;
                    break;
                
                default: 
                    cout << "You did not select a number from the menu!\n";
                    break;

        }
    } 
}