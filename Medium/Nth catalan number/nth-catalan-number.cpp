//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int mod=1e9+7;
    int rec(int i)
    {
        if(i==0 || i==1)
        return 1;
        long long val=0;
        for(int j=0;j<i;j++)
        {
            val+=(1ll*rec(j)*rec(i-j-1))%mod;
        }
        return val;
    }
    int rec1(int i,vector<int>&dp)
    {
        if(i==0 || i==1)
        return dp[i]=1;
        if(dp[i]!=-1)
        return dp[i];
        long long val=0;
        for(int j=0;j<i;j++)
        {
            val+=(1ll*rec1(j,dp)*rec1(i-j-1,dp))%mod;
        }
        return dp[i]=val%mod;
    }
    int findCatalan(int n) 
    {
        //code here
        // return rec(n);
        
        // dp memoization
        // vector<int>dp(n+1,-1);
        // return rec1(n,dp);
        
        // dp tabulation
        vector<int>dp(n+1,-1);
        dp[1]=dp[0]=1;
        for(int i=2;i<=n;i++)
        {
            long long val=0;
            for(int j=0;j<i;j++)
            val+=(1ll*dp[j]*dp[i-j-1])%mod;
            dp[i]=val%mod;
        }
        return dp[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends