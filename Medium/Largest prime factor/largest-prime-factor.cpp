//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        int ans = INT_MIN;
        for(int i = 1;i<=sqrt(N);i++)
        {
            if(N%i == 0){ // this means that i is a factor of N
                //then only i will be a factor of N and we need to check for it
                int fact1 = N/i;
                int fact2 = i;
                //now check if fact1 or fact2 is prime
                if(check(fact1, N)==1) ans = max(ans , fact1);
                if(check(fact2, N)==1) ans = max(ans , fact2);
            }
        }
        return ans;
    }
    bool check(int f , int N){
        //this function will check if f is prime
        if(f == 1) return 0;
        
        for(int i = 2;i*i<=f;i++) //i^2 <= f => i <=sqrt(f)
        {
            if(f%i == 0) return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends