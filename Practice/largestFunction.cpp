#include <iostream>

using namespace std; 

int largest(int a, int b, int c)
{
    int largest;
    if(a > b && a > c)
    {
        largest = a;
    }
    else if(b > a && b > a)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    return largest;
}

int main()
{
    int a1, a2, a3;

    cout << "Enter 3 integers: ";
    cin >> a1 >> a2 >> a3;

    cout << "The largest is: " << largest(a1, a2, a3);
    return 0;
}

