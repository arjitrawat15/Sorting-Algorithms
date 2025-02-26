//Merge sort
#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1 = m-l+1; //size of 
    int n2 = r-m;
    int L[n1],R[n2]; //creating temporary arrays 
    //copying data to temporary arrays
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(i=0;i<n2;i++)
    {
        R[i]=arr[m+1+i];
    }
    //Merging
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    //Copying the remaining elements of L[] if any 
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    //Copying the remaining elements of R[] if any 
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int low, int high) //low is the left index of array and high is the right index of array
{
    if(low>=high)
    {
        return;
    }
        int mid=(low+high)/2;
        mergesort(arr,low,mid); // divide and sort the left halve
        mergesort(arr,mid+1,high); // divide and sort the right halve
        merge(arr,low,mid,high); //to merge both the halves
}
void display(int arr[], int n)
{
    cout<<"Sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={38,27,43,10};
    int n=4;
    mergesort(arr,0,n-1);
    display(arr,n);
    return 0;
}
