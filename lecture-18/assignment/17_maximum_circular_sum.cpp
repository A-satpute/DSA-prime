#include<iostream>
using namespace std;

int maximum(int n)
{
    int arr[n];
    int sum=0;
    int m=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    for(int i=0;i<n;i++)
    {
       int  max=sum-arr[i];
       if(max>m)
      {
        m=max;
      }
    }
    return m;
}
int main()
{
    int n;
    cin>>n;
    cout<<maximum(n);
    return 0;
}