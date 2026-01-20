#include<iostream>
using namespace std;

int main()
{
    int p,r,t;
    cout<<"Enter the principal : ";
    cin>>p;
    cout<<"Enter the Rate : ";
    cin>>r;
    cout<<"Enter the time : ";
    cin>>t;

    float SI=p*r*t/100;
    cout<<SI;

    return 0;
}