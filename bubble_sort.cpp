#include<iostream>
using namespace std;
int main() 
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    int i, j, temp;
    int swapped;
    for (i = 0; i < n - 1; i++) 
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) 
        {
            break;
        }
    }
    cout<<"Sorted array : ";
    for (int i = 0; i < n; i++) 
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
