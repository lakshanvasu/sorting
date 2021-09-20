#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    int m=0;
    for(int i=0;i<n-1;i++)
    {
        m=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[m])
            {
                m=j;
            }
        }
        swap(arr[m],arr[i]);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    selectionsort(arr,n);
    cout<<"\nthe sorted array is : \n";
    print(arr,n);
    return 0;
}
