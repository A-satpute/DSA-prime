#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num=(n/2)+1;

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            cout<<"  ";
        }
        if(i==1)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<i-1;
        }
        for(int j=3;j<=(2*i)-1;j++)
        {
            cout<<"  ";
        }
        if(i!=1)
        {
            cout<<" "<<i-1<<" ";
        }
        cout<<endl;

    }

    for(int i=num-1;i>=1;i--)
    {
        for(int j=1;j<=num-i;j++)
        {
            cout<<"  ";
        }
        if(i==1)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<i-1;
        }
        for(int j=3;j<=(2*i)-1;j++)
        {
            cout<<"  ";
        }
        if(i!=1)
        {
            cout<<" "<<i-1<<" ";
        }
        cout<<endl;

    }
}