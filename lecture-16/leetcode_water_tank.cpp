#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> height={2,8,3,5,4,8,7,2};
    int ma=*max_element(height.begin(),height.end());
    cout<<ma<<endl;
    int max=height[0];
    int second=0;
    for(int i=0;i<height.size();i++)
    {
        if(height[i]<height[i+1] && max!=height[i])
        {
            second=height[i];
        }
        else
        {
            second=ma;
        }
    }
    cout<<second*second;
}