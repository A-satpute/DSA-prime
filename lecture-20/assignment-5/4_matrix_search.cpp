#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[n][m];
        }
    }

    int target;
    cin>>target;
    int count=0;
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<m;j++)
        {
            if(arr[i][j]==target)
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        cout<<0;
    }
    else{
        cout<<1;
    }
}