#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter your number : ";
    cin>>n;
    if(n>=300&&n<=460)
    {
        cout<<"you win a MacBook";
        if(n>=300&&n<=380)
        {
            cout<<"Model:M1 Mac"<<endl;
        }
        else
        {
             cout<<"Model:M2 Mac"<<endl;
        }
    }
    else if(n>=200&&n<=280)
    {
        cout<<"you win a pack of Kurkure"<<endl;
        if(n>=200&&n<=240)
        {
            cout<<"Flour :Chilli Kurkure"<<endl;
        }
        else
        {
             cout<<"Flour :Onion Kurkure"<<endl;
        }

    }
    else if(n>=1100&&n<=1500)
    {
        cout<<"Cycle"<<endl;
        if(n>=1100&&n<=1300)
        {
            cout<<"Brand :Avon Cycle"<<endl;
        }
        else
        {
             cout<<"Brand: Hero Cycle"<<endl;
        }
    }
    else if(n>=50&&n<=80)
    {
        cout<<"You win a Bike"<<endl;
        if(n>=50&&n<=65)
        {
            cout<<"Model : Bullet"<<endl;
        }
        else
        {
             cout<<"Model Rajdoot"<<endl;
        }
    }
    else
    {
        cout<<"better luck next time "<<endl;
    }
    return 0;
}