#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"\t";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k-1+i<<"\t";
        }
         for(int k=i;k>=2;k--)
        {
            cout<<k+i-2<<"\t";
        }
        cout<<endl;
    }
    return 0;
}