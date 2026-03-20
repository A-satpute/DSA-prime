#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans;
    isalnum(s[0]);

    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]!=s[i])
        {
            ans=s[i];
        }
    }
    cout<<ans;
}