#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    int even=0;
    int odd=0;
    while(n!=0)
    {
        int remainder=n%10;
        count++;
        if(count%2==0)
        {
            even=even+remainder;
        }
        else
        {
            odd=odd+remainder;
        }
        n=n/10;
    }
    cout<<odd<<endl;
    cout<<even<<endl;
}