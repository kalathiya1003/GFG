//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int isPerfectNumber(long long N) {

        long long sum=0;
        if(N==1){
            return 0;
        }


        for(long long i=2;i*i<N;i++){
            if(N%i==0){
                sum+=i+(N/i);
            }
            
        }


        if((sum+1)==N){
            return 1;
            
        }
        else{
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends