//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int solve(int *arr, int n, vector<int>& dp, int index) {
        if (n <= 0 || index <0 ) return 0;
        dp[1]=arr[0];
        if (dp[n] != -1) return dp[n];
        int include = solve(arr, n - 2, dp, index - 2) + arr[index];
        int exclude = solve(arr, n - 1, dp, index - 1);
        dp[n] = max(include, exclude);
        return dp[n];
    }

    int findMaxSum(int *arr, int n) {
        vector<int> dp(n + 1, -1);
        return solve(arr, n, dp, n - 1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends