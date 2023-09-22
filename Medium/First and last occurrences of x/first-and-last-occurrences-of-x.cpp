//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
vector<int> find(int arr[], int n , int x )
    {
        int a = lower_bound(arr, arr+n, x)-arr;
        if (a > n) a=-1;
        int b = upper_bound(arr, arr+n, x) - arr - 1;
        if (b > n) b=-1;
        if (arr[a]!=x) a=-1, b=-1;
        return {a, b};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends