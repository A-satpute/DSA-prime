#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter your marks : ";
    cin>>n;
    if(60<=n)
    {
        cout<<"your result card Grade : A ";
    }
    else if(50<=n)
    {
        cout<<"your result card Grade  : B ";
    }
    else if(33<=n)
    {
         cout<<"your result card Grade  : C ";
    }
    else
    {
         cout<<"your result card Grade  :  Fail";
    }


    return 0;
}