#include<iostream>
using namespace std;
int main() 
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) 
    {
        min = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min]) 
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    cout<<"Sorted array : ";
    for (int i = 0; i < n; i++) 
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
