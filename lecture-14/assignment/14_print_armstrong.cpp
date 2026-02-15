#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        int temp=i;
        int sum=0;
        int digits=0;
        int count=i;
         while(count>0)
       {
        count=count/10;
        digits++;
       }
       temp=i;
       while(temp>0)
      {
        int rem=temp%10;
        sum=sum+pow(rem,digits);
        temp=temp/10;
      }
       if(i==sum)
      {
        cout<<i;;
      }
    }
    return 0;
}