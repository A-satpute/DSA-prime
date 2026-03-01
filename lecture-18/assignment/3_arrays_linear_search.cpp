#include<iostream>
using namespace std;

int search(int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;;
}
int main()
{
    int n;
    cin>>n;
    cout<<search(n);
    return 0;
}