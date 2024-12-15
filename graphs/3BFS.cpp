#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        queue<int> que;
        que.push(0);
        // 0-based indexing
        bool vis[10002] = {false};
        // for(int i=0; i<1000; i++)
        //     vis[i].push_back(false);
        vis[0] = true;
        vector<int> ans;
        while(!que.empty()){
            int curr = que.front();
            ans.push_back(curr);
    
            for(int j=0; j<adj[curr].size(); j++){
                int element = adj[curr][j];
                if(!vis[element]){
                    que.push(element);
                    vis[element] = true;
                }
            }

            que.pop();
        }
        return ans;
    }
};
