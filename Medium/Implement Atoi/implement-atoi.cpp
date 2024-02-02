//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int start=0;
        if(s[0]=='-'){
            start=1;
        }
        for(int i=start;i<s.size();i++){
            if(s[i]<'0'||s[i]>'9'){
                return -1;
            }
        }
        int sum=0;
        for(int i=start;i<s.size();i++){
            sum*=10;
            sum+=(s[i]-'0');
        }
        return start?-sum:sum;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends