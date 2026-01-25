#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    m=n/2;
    int space=m+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<"  ";
        }
        if(i%2!=0)
        {
            for(int k=1;k<=i;k++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(int k=space;k>=1;k--)
        {
         cout<<"* ";
        }
        space=space-2;
        cout<<endl;
    }


}