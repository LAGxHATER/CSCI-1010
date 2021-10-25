#include<iostream>

using namespace std; 

int main() {
    int userNum;
    char letterGrade;

    if(userNum >= 90)
    {
        cout << "A"; 
    }
    else if(userNum >= 80)
    {
        cout << "B";
    }
    else if(userNum >= 70)
    {
        cout << "C";
    }
    else if(userNum >= 60)
    {
        cout << "D";
    }
    else if(userNum >= 0)
    {
        cout << "F";
    }

    
}
