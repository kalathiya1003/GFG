//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    //Complete this function
    int n;
    vector<string> ans;
    multiset<int> st;
    
    void solve(string temp,string &s){
        if(temp.length()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            
            if(st.find(i)==st.end())
            {temp+=s[i];
            st.insert(i);
            solve(temp,s);
            temp.pop_back();
                st.erase(i);
            }
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        n=S.size();
        string temp="";
        solve(temp,S);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends