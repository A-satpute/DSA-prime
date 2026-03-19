#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    int left=0,right=c-1;
    int top=0,down=r-1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    while(left<=right && top<=down)
    {
        
        for(int i=top;i<=down;i++)
        {
            cout<<arr[i][left]<<", ";
        }
        left++;
        
        for(int i=left;i<=right;i++)
        {
            cout<<arr[down][i]<<", ";
        }
        down--;

        if(top<=down)
        {
            for(int i=down;i>=top;i--)
            {
                cout<<arr[i][right]<<", ";
            }
            right--;
        }
        if(left<=right)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<arr[top][i]<<", ";
            }
            top++;
        }
    }
    cout<<"END";
}