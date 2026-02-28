#include<iostream>
using namespace std;


bool isPalindrome(int x) {
        int s=0;
        while(x!=0)
        {
            int rem=x%10;
            s=s*10+rem;
            x=x/10;
        }
        if(s==x)
        {
            return true;
        }
        return false;
    }
int main()
{
    int x;
    cin>>x;
    isPalindrome(x);
    

}