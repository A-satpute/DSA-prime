#include<iostream>
#include<algorithm>
using namespace std;
void triplet(int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sourt array using sort function and algorithum package
     sort(arr,arr+n-1);
    int target;
    cin>>target;
    int i=0;
    while(i<n)
    {
        int sum=arr[i]+arr[i+1]+arr[i+1];
        if(sum==target)
        {
            cout<<arr[i]<<arr[i+1]<<arr[i+2];
        }
    }
}
int main()
{
    int n;
    cin>>n;
    triplet(n);
    return 0;
}