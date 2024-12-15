class Solution {
public:
    void bfs(vector<int> adj[], vector<bool>& vis, int start){
        queue<int> que;
        que.push(start);
        vis[start] = true;
        while(!que.empty()){
            int element = que.front();
            que.pop();
            for(auto & it : adj[element]){
                if(!vis[it]){
                    que.push(it);
                vis[it] = true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isCo) {
        // creating adj list
        int n = isCo.size();
        vector<int> adj[n];
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                // check for edge and also prevent taking same node as i and j.
                if(isCo[i][j] == 1 && i != j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        // visited array
        vector<bool> vis(n, false);
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                cnt++;
                bfs(adj, vis, i);
            }
        }
        return cnt;
    }
};