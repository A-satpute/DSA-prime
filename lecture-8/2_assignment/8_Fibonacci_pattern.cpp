#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,b=1;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a<<" ";
            b=a+b;
            a=b-a;
        }
        cout<<endl;
    }
    return 0;
}