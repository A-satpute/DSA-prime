//linear search 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int search;
    cin>>search;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==search)
        {
            cout<<j+1<<endl;
        }
    }

    return 0;
}