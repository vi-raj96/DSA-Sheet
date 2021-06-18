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
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
        {
            if(i!=j)
            {
                int t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
	return 0;
}