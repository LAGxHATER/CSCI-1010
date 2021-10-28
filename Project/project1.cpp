//Raymond Elks & Noah Warren
//CSCI-1010-002
//Project 1
//Self-checkout for restaurant

#include <iostream>

using namespace std;

int main()
{
    //variables
    char opt;
    int n;
    double btotal, etotal, ctotal, total;

    //display menu to user
    cout << "***** Welcome to ECU Cafe *****\n";
    cout << "##### Menu #####\n";
    cout << "1. Cheeseburger     $5.99\n";
    cout << "2. Espresso         $3.99\n";
    cout << "3. Cheese Stick     $4.99\n";

    while(true)
    {   
        //prompt user for id of item
        cout << "Enter the id of an item: (C for checkout)\n";
        cin >> opt;

        //if statement to checkout and restart the program if opt = 'C'
        if(opt == 'C' || opt == 'c')
        {
            //equation for total calculation
            total = btotal + etotal + ctotal;

            //return total to user
            cout << "Your total is $" << total << endl;
            cout << "Thank you!\n";
            cout << endl;
            
            //restart the program
            cout << "***** Welcome to ECU Cafe *****\n";
            cout << "##### Menu #####\n";
            cout << "1. Cheeseburger     $5.99\n";
            cout << "2. Espresso         $3.99\n";
            cout << "3. Cheese Stick     $4.99\n";

            //set values of variables back to 0
            btotal = 0, etotal = 0, ctotal = 0, total = 0;
            
            //prompt user for id of item
            cout << "Enter the id of an item: (C for checkout)\n";
            cin >> opt;
        }

        //prompt user for the # of items
        cout << "Enter the amount you would like: \n";
        cin >> n;

        //switch to determine subtotals based on the amount of each item
        switch(opt)
        {
            case '1':
                btotal = 5.99 * n;
                break;
            case '2':
                etotal = 3.99 * n;
                break;
            case '3':
                ctotal = 4.99 * n;
                break;
        }
    }
}