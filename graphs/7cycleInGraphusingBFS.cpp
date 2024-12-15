#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
    bool detect(int src, vector<vector<int>>& adj, vector<bool>& vis){
        vis[src] = true;
        queue<pair<int, int>> que;
        que.push({src, -1});
        while(!que.empty()){
            int node = que.front().first;
            int parent = que.front().second;
            que.pop();
            for(auto& adjNode : adj[node]){
                if(!vis[adjNode]){
                    vis[adjNode] = true;
                    que.push({adjNode, node});
                }
                else if(parent != adjNode)
                    return true;
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<bool> vis(n, false);
        for(int i=0; i<n; i++){
            if(!vis[i])
                if(detect(i, adj, vis)) return true;
        }
        return false;
    }
};



int main(){
	cout<<"mONU";
	int tc;
	cin>>tc;
	while(tc--){
		int V, E;
		cin>>V>>E;
		vector<vector<int>> adj(V);
		for(int i=0; i< E; i++){
			int u, v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(adj);
		if(ans)
			cout<<"1\n";
		else
			cout<<"0\n";

		cout<<"~"<<endl;
	}
	return 0;
}