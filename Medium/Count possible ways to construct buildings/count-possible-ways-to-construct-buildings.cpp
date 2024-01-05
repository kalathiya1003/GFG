//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	       int mod = 1e9 + 7;
 
        int a = 1;
        int b = 1;
        int ans;
    
        for (int i = 1; i <= N; i++)
        {
            ans = (a + b) % mod;
            a = b % mod;
            b = ans % mod;
        }
    
        return (int)((1LL * ans * ans) % mod);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends