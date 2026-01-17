#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int bouns;
    cin>>a>>b;

    if(b>=5)
    {
        bouns=a/10;
        cout<<bouns;
    }
    else
    {
        cout<<"0";
    }

    return 0;
}