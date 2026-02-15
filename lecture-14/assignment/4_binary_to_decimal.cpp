#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    int sum=0;

    while(n!=0)
    {
        int rem=n%10;
        sum=sum+rem*pow(2,count);
        n=n/10;
        count++;
    }

    cout<<sum;
    
    return 0;
}