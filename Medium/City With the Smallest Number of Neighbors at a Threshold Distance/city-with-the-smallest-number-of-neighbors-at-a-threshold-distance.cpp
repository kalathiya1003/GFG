//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int th) { 
        vector<vector<int>> mat(n, vector<int>(n, 1e9));
        for(auto &x : edges){
            mat[x[0]][x[1]] = mat[x[1]][x[0]] = x[2];
            mat[x[0]][x[0]] = mat[x[1]][x[1]] = 0;
        }
        for(int k = 0; k < n; k++)
            for(int i = 0; i < n; i++)
                for(int j = 0; j < n; j++)
                    if(mat[i][k] != 1e9 and mat[k][j] != 1e9 and mat[i][j] > mat[i][k] + mat[k][j])
                        mat[i][j] = mat[i][k] + mat[k][j];
        int ans_city = -1, no_of_cities = INT_MAX;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(i == j) continue;
                cnt += (mat[i][j] <= th);
            }
            if(cnt <= no_of_cities) no_of_cities = cnt, ans_city = i;
        }
        return ans_city;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends