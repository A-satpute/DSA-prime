#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();

    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z' )
        {
            s[i]=tolower(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z' )
        {
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}