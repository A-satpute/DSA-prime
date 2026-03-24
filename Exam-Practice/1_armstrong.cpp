#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int copy=n;
    int temp=n;
    int sum=0;
    int p=0;
    while(temp>0)
    {
        temp=temp/10;
        p++;
    }
    while(n>0)
    {
        int rem=n%10;
        sum=sum+pow(rem,p);
        n=n/10;
    }
    if(sum==copy)
    {
        cout<<"armstong";
    }
    else{
        cout<<"not";
    }
}