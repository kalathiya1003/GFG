//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
             int ans1 = n, ans2 = n;
            d %= 16;
            ans1 = (((n << d) | (n >> (16 - d))) & 65535);
            ans2 = (((n >> d) | (n << (16 - d))) & 65535);
		    return {ans1, ans2};//code here.
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends