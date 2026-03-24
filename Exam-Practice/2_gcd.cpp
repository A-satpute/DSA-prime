#include<iostream>
#include<algorithm>
using namespace std;
int gc(int n1,int n2)
{
    if(n2==0)
    {
        return n1;
    }
    return gc(n2,n1%n2);
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<gc(n1,n2)<<endl;
    cout<< __gcd(n1,n2);

}