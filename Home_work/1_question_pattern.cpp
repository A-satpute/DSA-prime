#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n;
    int l=1;

    for(int i=1;i<=(n/2)+1;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=m;j++)
        {
            if(l%i==0)
            {
                cout<<j<<" ";
            }
            l++;
        }
        m=m-2;
        cout<<endl;
    }
}