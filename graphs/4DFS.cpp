#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(vector<vector<int>>& adj, vector<int>& ans, bool* vis, int start){
        vis[start] = true;
        ans.push_back(start);
        // traverse all its neighbours
        for(auto it: adj[start])
            if(!vis[it])
                dfs(adj, ans, vis, it);
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Codehere
        bool vis[10001] = {false};
        vis[0] = true;
        vector<int> ans;
        int start = 0;
        dfs(adj, ans, vis, start);
        return ans;
    }
};