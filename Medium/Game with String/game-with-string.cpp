//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
         priority_queue<int> max_heap;
        vector<int> cnt(26,0);
        
        int n = s.size();
        
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(cnt[i]>0){
                max_heap.push(cnt[i]);
            }
        }

        
        while(k--){
            int top = max_heap.top();
            max_heap.pop();
            top--;
            max_heap.push(top);
        }
        
        int res = 0;
        while(!max_heap.empty()){
            int top = max_heap.top();
            max_heap.pop();
            res+=pow(top,2);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends