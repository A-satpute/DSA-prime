#include<iostream>
using namespace std;

int main()
{
    int n;
    int series;
    cin>>series;
    cin>>n;
    int sum=0;
    int i=1;
    int count=0;

    while(count<series)
    {
        sum=3*i+2;
       int tab=n*i;
        if(sum%n!=0)
        {
            cout<<sum<<endl;
            count++;
        }
        i++;
    }
    return 0;
}