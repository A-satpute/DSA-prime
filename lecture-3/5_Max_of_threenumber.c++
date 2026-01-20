#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    if(a<b)
    {
        if(b<c)
        {
            cout<<"maximum number is  "<<c<<endl;
        }
        else
        {
            cout<<"maximum number is  "<<b<<endl;

        }
    }
    else
    {
        if(a<c)
        {
            cout<<"maximum number is  "<<c<<endl;
        }
        else
        {
            cout<<"maximum number is  "<<a<<endl;
        }
    }

    return 0;
}