#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
       if(v[i]<=min)
       {
           min=v[i];
       }
    }
    for(int i=0;i<n;i++)
    {
       if(v[i]>=max)
       {
           max=v[i];
       }
    }
    cout<<min<<" "<<max;
	return 0;
}