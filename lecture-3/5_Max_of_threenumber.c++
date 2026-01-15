#include<iostream>
using namespace std;

int main()
{
    int a=6;
    int b=0;
    int c=4;
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