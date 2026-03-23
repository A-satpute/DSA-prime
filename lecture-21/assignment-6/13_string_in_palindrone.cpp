#include<iostream>
#include<algorithm>
using namespace std;

bool palin(string s)
{
    string s1=s;
    reverse(s.begin(),s.end());
    if(s!=s1)
    {
        return false;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    cout<<palin(s);
}