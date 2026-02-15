#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int original=n;
    int temp=n;
    int count=0;
    int sum=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }

    while(n!=0)
    {
        int rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(original==sum)
    {
        cout<<"armstrong number ";
    }
    else
    {
        cout<<"not armstrong number";
    }
    return 0;
}