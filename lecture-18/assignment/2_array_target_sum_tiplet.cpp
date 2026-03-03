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
    //sort array using sort function and algorithum package
     sort(arr,arr+n-1);
    int target;
    cin>>target;
    int start=0;
    int m=n-2;
    int end=n-1;

    while(start<m)
    {
        int sum=arr[start]+arr[m]+arr[end];
        if(sum==target)
        {
            cout<<arr[start]<<" "<<arr[m]<<" "<< arr[end];
        }
        m--;
        end--;
        
    }
}
int main()
{
    int n;
    cin>>n;
    triplet(n);
    return 0;
}