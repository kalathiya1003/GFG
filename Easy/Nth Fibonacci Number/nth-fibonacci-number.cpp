//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
          int a=1;
        int b=1;
        if(n==1||n==2)
        return 1;
        int ans;
        for(int i=2;i<n;i++){
            int next=a+b;
            ans=next%1000000007;
        
        a=b;
        b=ans;
            
        }
        return ans%1000000007;// code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends