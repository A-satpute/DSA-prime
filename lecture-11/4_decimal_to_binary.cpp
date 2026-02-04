#include<iostream>
using namespace std;

int rev(int n)
{
    int rev=0;
    while(n!=0)
    {
        int k=n%2;
        bn=bn*10+k;
        n=n/2;
    }
    //recursion
    return fibbo(n-1)+fibbo(n-2);
}
int main()
{
    int n;
    cin>>n;
    int g=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
           cout<<fibbo(g)<<"  "; 
           g++; 
        }
       
    }
    
    return 0;
}