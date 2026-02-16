#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;
    int c2=0;
    int rev=0;
    int count=0;
    while(temp!=0)
    {
        int r=temp%10;
        count++;
        temp=temp/10;
    }
    while(n!=0)
    {
        int rem=n%10;
        int c=9-rem;
        if(count==1 && c==0)
        {
            c2=c2*10+rem;     
        }
        else if(c>rem)
        {
            c2=c2*10+rem;
        }
        else
        {
            c2=c2*10+c;
        }
        n=n/10;
        count--;
    }
     while(c2!=0)
     {
         int rem=c2%10;
         rev=rev*10+rem;
         c2=c2/10;
     }

    cout<<rev;

}