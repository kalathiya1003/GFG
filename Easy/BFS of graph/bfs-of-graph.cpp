//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
   vector<int> bfsOfGraph(int V, vector<int> adjList[]) {
        
        queue<int>q;
        // unordered_map<int, bool>visited;
        
        q.push(0);
        vector<int>ans;
        
        vector<bool>visited(V, false);
        
        visited[0] = true;
        
        while(!q.empty()){
            
            int frontNode  =q.front();
            q.pop();
            
           ans.push_back(frontNode);
            
            // Insert Neighbour 
            
            for(auto neighbour: adjList[frontNode])
            
            {
                
                if(!visited[neighbour]){
                    
                    q.push(neighbour);
                    
                    visited[neighbour] = true;
                }
            }
        }
        
       return ans;
    }

};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends