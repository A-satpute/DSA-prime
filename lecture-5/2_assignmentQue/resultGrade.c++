#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(90<=n)
    {
        cout<<"A";
    }
    else if(75<=n)
    {
        cout<<"B";
    }
    else if(60<=n)
    {
         cout<<"C";
    }
    else
    {
         cout<<"Fail";
    }


    return 0;
}