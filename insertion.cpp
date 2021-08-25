#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={10,50,40,30,100,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    insertion(arr,n);
    print(arr,n);

    return 0;
}
