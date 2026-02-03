#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool ans=true;
    //we are already assume they are a prime
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            ans=false;
        }
    }
    if(ans)
    {
        cout<<"they are prime ";
    }
    else
    {
        cout<<"they are unprime";
    }
    return 0;
}