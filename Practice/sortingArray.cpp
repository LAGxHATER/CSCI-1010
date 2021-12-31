#include <iostream>

using namespace std; 

int main()
{
    int arr[5] = {23,17,32,34,52};
    int length = 5;
    
    for(int i = 1; i < length; i++)
    {
        for(int j = 0; j < length - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}