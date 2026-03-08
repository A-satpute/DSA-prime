#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr1[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<max(n,m);i++)
    {
        if(arr[i]!=arr1[i])
        {
            sum=sum+min(arr[i],arr1[i]);
        }
    }

}