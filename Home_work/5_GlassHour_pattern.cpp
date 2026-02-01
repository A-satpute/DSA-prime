#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=(n/2)+1;
    int num=n;

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=num;j++)
        {
            if(j%2==0)
            {
                cout<<"0"<<" ";
            }
            else
            {
                cout<<"1"<<" ";
            }
        }
        num=num-2;
        cout<<endl;
    }

    int l=1;
     for(int i=m-1;i>=1;i--)
    {
        l=l+2;
        for(int j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=l;j++)
        {
            if(j%2==0)
            {
                cout<<"0"<<" ";
            }
            else
            {
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
}