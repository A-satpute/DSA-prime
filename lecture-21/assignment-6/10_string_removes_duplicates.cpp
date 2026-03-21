#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans;

    for(int i=0;i<s.size();i++)
    {
        if(s[i-1]!=s[i])
        {
            ans+=s[i];
        }
    }
    cout<<ans;
}