#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||j==1 || i==n || j==n)
            {
                cout<<1<<" ";
            }
            else if(i==2 &&j==2 ||i==n-1 && j==n-1)
            {
                cout<<2<<" ";
            }
            else if(i==n-1 && j==2 || i==2 && j==n-1)
            {
                cout<<4<<" ";
            }
            else if(i==(n/2)+1 &&j==(n/2)+1)
            {
                cout<<i+j<<" ";
            }
            else
            {
                cout<<3<<" ";
            }
        }
        cout<<endl;
    }
}