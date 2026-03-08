#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int two[n];
    two[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int g=0;
        int sum=0;
        while(arr[i]>0)
       {
          int k=arr[i]%10;
          sum+=k*pow(2,g);
          g++;
          arr[i]=arr[i]/10;
       }
       two[i]=sum;
    }
    for(int i=0;i<n;i++)
    {
        cout<<two[i]<<endl;
    }
}