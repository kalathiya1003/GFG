//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    public:
    const int MOD = 1e9 + 7;
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n) {
        long long res = 0;
        long long prev1 = 1, prev2 = 0, prev3 = 0;
        for(int i = 0; i < n; i++) {
            long long curr = prev1 + prev2 + prev3;
            curr %= MOD;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends