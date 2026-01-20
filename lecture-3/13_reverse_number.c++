#include<iostream>
using namespace std;
int main()
{
    int n,remainder;
    cout<<"Enter the number : ";
    cin>>n;
    int reverse=0;
    while(n>0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;

    }
    cout<<"Sum of N natural number : "<<reverse;

    return 0;
}