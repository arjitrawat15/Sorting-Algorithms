#include<iostream>
using namespace std;
int main() 
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = 5;
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout<<"Sorted array : ";
    for (int i = 0; i < n; i++) 
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
