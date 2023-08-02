//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isvalid(int n, int m, int x, int y){
        if (x>=n or x<0) return false;
        if (y>=m or y<0) return false;
        return true;
    }
    int shortestDistance(int n, int m, vector<vector<int>> g, int x, int y) {
        vector<pair<int, int>> movements={make_pair(1, 0), make_pair(0, -1), make_pair(0, 1), make_pair(-1, 0)};
        vector<vector<bool>> vis(n , vector<bool> (m , false));
        vector<vector<int>> lev(n , vector<int> (m , -1));
        queue<pair<int,int>> q;
        q.push({0, 0}); lev[0][0]=0; vis[0][0]=true;
        while(!q.empty()){
            int vx = q.front().first;
            int vy = q.front().second;
            if (vx==x and vy==y) return lev[x][y];
            q.pop();
            for(auto movement: movements){
                int child_x = vx+movement.first;
                int child_y = vy+movement.second;
                if (isvalid(n, m, child_x, child_y) and g[child_x][child_y] and !vis[child_x][child_y]){
                    lev[child_x][child_y] = lev[vx][vy]+1;
                    vis[child_x][child_y] = true;
                    q.push({child_x, child_y});
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends