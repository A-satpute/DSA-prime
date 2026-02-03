#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int reverse=0;
     while(n!=0)
    {
        int remainder=n%10;
        reverse=reverse+remainder;
        n=n/10;
    }
    cout<<abs(reverse)<<endl;

    return 0;
}