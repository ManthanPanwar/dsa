#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // void bfs(vector<vector<int>>& adj, int n, int start, vector<bool>& vis){
    void bfs(vector<int> adj[], int n, int start, vector<bool>& vis){
        queue<int> que;
        que.push(start);
        vis[start] = true;
        while(!que.empty()){
            int element = que.front();
            for(auto it: adj[element]){
                if(!vis[it]){
                    que.push(it);
                    vis[it] = true;
                }
            }
            que.pop();
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        // storing in adjacency list
        // vector<vector<int>> adj(n);
        // for(auto& edge: edges){
        //     adj[edge[0]].push_back(edge[1]);
        //     adj[edge[1]].push_back(edge[0]);
        // }

        vector<int> adj[n];
        for(auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        // bool vis[10001] = {false};
        vector<bool> vis(n,false);
        int cnt = 0;
        for(int i=0;i<n; i++){
            if(!vis[i]){
                cnt++;
                bfs(adj, n, i,vis);
            }       
        }
        return cnt;
    }
};
