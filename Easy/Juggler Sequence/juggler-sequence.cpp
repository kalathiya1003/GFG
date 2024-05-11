//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   vector<long long> jugglerSequence(long long n) {
        vector<long long>ans={n};
        while(ans.back()!=1){
            if(ans.back()&1){ans.push_back(pow(ans.back(), 1.5));}
            else{ans.push_back(sqrt(ans.back()));}
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        Solution ob;
        vector<long long> ans = ob.jugglerSequence(n);
        for (long long u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends