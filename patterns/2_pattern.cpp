#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        cout<<i+1<<" ";
        for(int j=1;j<=(2*i-1);j++)
         {
             cout<<0<<" ";
         }
         if(i!=0)
         {
            cout<<i+1<<" ";
         }
        cout<<endl;
    }
    return 0;
}