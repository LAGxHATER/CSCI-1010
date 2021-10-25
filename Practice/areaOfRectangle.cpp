#include<iostream>

using namespace std;

int main()
{
    int height; 
    int length; 
    int area;

    cout << "enter the length: ";
    cin >> length; 
    cout << "enter the height: ";
    cin >> height; 


    area = height*length;

    std::cout << "the area of the rectangle is " << area;

    return 0;
}