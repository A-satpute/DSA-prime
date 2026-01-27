#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    m=n/2;
    int star=1;
    for(int i=1;i<=m+1;i++)
    {
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=star;k++)
       {
            cout<<"* ";
       }
       star=star+2;
         cout<<endl;
    }
    
    for(int i=1;i<=m;i++)
    {
        star-=4;
        for(int j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(int k=star;k>=1;k--)
        {
         cout<<"* ";
        }
        star+=2;
        cout<<endl;
    }
    return 0;
}