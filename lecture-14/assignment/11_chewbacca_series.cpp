#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c2=0;
    int rev=0;
    while(n!=0)
    {
        int rem=n%10;
        int c=9-rem;
        if(c>rem)
        {
            c2=c2*10+rem;
        }
        else
        {
            c2=c2*10+c;
        }
        n=n/10;
    }
     while(c2!=0)
     {
         int rem=c2%10;
         rev=rev*10+rem;
         c2=c2/10;
    }

    cout<<rev;

}