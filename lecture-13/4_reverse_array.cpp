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
    int end=n-1;
    int start=0;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}