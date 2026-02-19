#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}

int nCr(int n,int r)
{
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nCr=fact(n-r);

    return fact_n/ fact_r * fact_nCr;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r);

    return 0;
}