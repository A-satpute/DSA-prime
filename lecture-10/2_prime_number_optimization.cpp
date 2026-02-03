#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool ans=true;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            ans=false;
        }
    }

    if(!ans)
    {
        cout<<"they are not a prime number ";
    }
    else
    {
        cout<<"they are a prime number ";
    }

    return 0;
}