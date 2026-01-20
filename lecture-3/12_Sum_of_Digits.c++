#include<iostream>
using namespace std;
int main()
{
    int n,remainder;
    cout<<"Enter the number : ";
    cin>>n;
    int sum=0;
    while(n>0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;

    }
    cout<<"Sum of N natural number : "<<sum;

    return 0;
}