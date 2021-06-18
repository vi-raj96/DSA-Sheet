// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int z=0,o=0,t=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==0)
       {
           z++;
       }
       else if(arr[i]==1)
       {
           o++;
       }
       if(arr[i]==2)
       {
           t++;
       }
   }
   int k=0;
   for(int i=0;i<z;i++)
   {
       arr[k++]=0;
   }
   for(int i=0;i<o;i++)
   {
       arr[k++]=1;
   }
   for(int i=0;i<t;i++)
   {
      arr[k++]=2;
   }
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends