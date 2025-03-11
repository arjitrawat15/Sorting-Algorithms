//Quick sort in ascending order
#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pindex=partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
}
int main()
{
    int arr[]={4,6,2,5,7,9,1,3};
    int n=8;
    quicksort(arr,0,(n-1));
    cout<<"Sorted array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}