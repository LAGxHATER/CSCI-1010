#include<iostream> 

using namespace std; 

int main()

{
    int n; 
    int i;
    int largest;

    
    for(i = 1; i <= 10; i++)
    {
        cout << "Enter a number: ";
        cin >> n;
        if(i == 1)
        {
            n = largest;
        }
        else
        {
            if(n > largest)
            {
                largest = n;
            }
        }
    }
}