#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int product[n];
    int sum=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       sum=sum*arr[i];
    }
    for(int i=0;i<n;i++)
    {
        product[i]=sum/arr[i];
        cout<<product[i]<<" ";
    }
    
    return 0;
}