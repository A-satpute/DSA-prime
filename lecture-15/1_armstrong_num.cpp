#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int original=n;
    int temp=n;
    int sum=0;
    //calculate the length of number
    int l=0;
    while(temp!=0)
    {
        temp=temp/10;
        l++;
    }
    //power nikalna and add karna
    while(n!=0)
    {
        int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
    //compare karna
    if(original==sum)
    {
        cout<<"armstrong number ";
    }
    else
    {
        cout<<"non- armstrong ";
    }
    return 0;
}