#include<iostream>
using namespace std;

int main()
{
    string chars;
    cin>>chars;
    string ans;
    int n=chars.size();
    
    for(int i=0;i<n;i++)
    {
        char ch=chars[i];
        int count=0;
        while(i<n && chars[i]==ch)
        {
            count++;
            i++;
        }

        ans+=ch;
        string s=to_string(count);
        for(int j=0;j<s.size();j++)
        {
            ans+=s[j];
            
        }
        i--;
    }
    cout<<ans;
}