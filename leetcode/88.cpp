#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums1={1,2,3,0,0,0};
    int m=3;
    vector<int> nums2={2,5,6};
    int n=nums2.size();
    int l=m+n;
    for (int j = 0, i = m; j<n; j++)
    {
        nums1[i] = nums2[j];
         i++;
     }
    sort(nums1.begin(),nums1.end());

    for(int i=0;i<n;i++)
    {
        cout<<nums1[i];
    }
    return 0;
}