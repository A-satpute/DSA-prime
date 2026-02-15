#include<iostream>
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
        if(remainder==0)
        n=n/10;
    }
    cout<<odd<<endl;
    cout<<even<<endl;
    return 0;
}