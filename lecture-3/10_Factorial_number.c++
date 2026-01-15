#include<iostream>
using namespace std;

int main()
{
    int n;
    int fact=1;
    cout<<"write the number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<n<<" factorial number :  "<<fact;


    return 0;
}