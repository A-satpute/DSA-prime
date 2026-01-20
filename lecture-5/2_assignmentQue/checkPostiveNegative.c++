#include<iostream>
using namespace std;

int main()
{
    long n;
    cin>>n;
        if(n<0)
        {
            cout<<"Output: Negative";
        }
        else if(n>0)
        {
            cout<<"Output: Positive";
        }
        else if(n==0)
        {
            cout<<"Output : Zero";
        }
    return 0;
}