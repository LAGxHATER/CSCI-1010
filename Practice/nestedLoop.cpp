#include<iostream> 

using namespace std; 

int main()
{
    int i = 1;
    int sum = 0;
    int product;
    int userNum;

    cout << "Enter an integer: ";
    cin >> userNum;

    while(i <= userNum)
    {
        int a = 1, product = 1;
        while(a <= 1)
        {
            product *= a;
            a++;
        }
        sum += product;
        i +=2; 
    }
    cout << "The value is " << sum; 
}