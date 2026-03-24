#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int left=0,right=n-1;
    int top=0,down=n-1;

    while(left<=right && top<=down)
    {
        for(int i=left;i<=right;i++)
        {
            cout<<arr[top][i];
        }
        top++;
        for(int i=top;i<=down;i++)
        {
            cout<<arr[i][right];
        }
        right--;
        if(top<=down)
        {
            for(int i=right;i>=left;i--)
          {
            cout<<arr[down][i];
          }
        down--;
        }
        
        if(left<=right)
        {
            for(int i=down;i>=top;i--)
          {
            cout<<arr[left][i];
          }
        left++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
    }
}