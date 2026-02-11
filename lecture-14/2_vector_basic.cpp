//---------------------------------------             vector                  ---------------------------------------

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> a;
    //update element
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);


    //size check
    cout<<a.size()<<endl;

    //capacity check
    cout<<a.capacity()<<endl;

    //delete element
    a.pop_back();

    //size check
    cout<<a.size()<<endl;

    //capacity check
    cout<<a.capacity()<<endl;

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //first element
    cout<<a.front()<<endl;

    // last element
    cout<<a.back()<<endl;

    //this use for insrt element in starting any position
    a.insert(a.begin()+2,6);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //this use for insrt element in ending any position
    a.insert(a.end()-1,9);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //reverse
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //sort
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}