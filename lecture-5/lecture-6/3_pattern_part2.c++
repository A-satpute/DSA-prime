#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i<=n;i++)
    {
        for(int j=5;j>=n+1;j--)
        {
            cout<<"*";
        }
        for(int k=1;k<=i-1;k++)
        {
            cout<<"  ";
        }
        cout<<endl;
        /*for(int j=1;j<=n-1;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=i-1;k++)
        {
            cout<<"  ";
        }
        cout<<endl;*/
    }
}