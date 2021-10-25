#include<iostream> 

using namespace std; 

int main(){

    int num;
    int largest;
    cin >> num;
    largest = num;

    cout << "Enter integers (0 to terminate)" << endl; 

    while(num != 0)
    {
        if(num > largest)
        {
            num = largest;
        }
        cin >> num;
    }

    cout << "The largest is " << largest << endl; 

}