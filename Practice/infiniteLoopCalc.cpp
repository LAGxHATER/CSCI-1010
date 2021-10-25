#include<iostream>

using namespace std; 

int main(){

    int option; 
    int a;
    int b;
    int total; 

    cout << "Please select from the menu\n"; 
    cout << "1, Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n"; 

    cin >> option;

    cout << "Enter two integers: " << endl; 
    cin >> a >> b; 


    switch(option)
    {
        case '1': 
            total = a + b;
        
        case '2': 
            total = a - b; 

    }



    
}