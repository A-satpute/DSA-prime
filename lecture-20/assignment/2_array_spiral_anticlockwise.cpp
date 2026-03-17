#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    int left=0;
    int right=c-1;
    int top=0;
    int down=r-1;
    for(int i=0;i<down;i++)
    {
        for(int j=0;j<down;j++)
        {
            cout<<arr[i][j];
        }
    }
    while(left<=right && top<=down)
    {
        //top to down
        for(int i=top;i<down;i++)
        {
            cout<<arr[i][left]<<" ";
        }
        left++;
        //left to right
        for(int i=left;i<=right;i++){
            //down
            cout<<arr[down][i]<<" ";
        }
        down--;
    }
}