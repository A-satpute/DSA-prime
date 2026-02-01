#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=0;
    int c=1;
    int num=(n/2)+1;

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            cout<<"  ";
        }
            a=b+c;
            //b=a+c;
            c=b+a;
            b=a+c;
            cout<<a<<" ";
        cout<<endl;

    }
}