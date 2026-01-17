#include<iostream>
using namespace std;

int main()
{
    int n,bill;
    cin>>n;

    if(n<=100)
    {
        bill=n*2;
        cout<<bill;
    }
    else if(n<=200)
    {
        bill=n*3;
        cout<<bill;
    }
    else
    {
        bill=n*5;
        cout<<bill;
    }
}