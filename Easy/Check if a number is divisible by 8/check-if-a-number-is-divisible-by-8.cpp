//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        if(s.size()<3){
            return stoi(s) % 8 == 0 ? 1 : -1;
        }
        int num = 0;
        int idx = s.size()-3;
        while(idx < s.size()){
            num = num * 10 + s[idx]-'0';
            idx++;
        }
        return num % 8 == 0 ? 1 : -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends