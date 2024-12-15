#include <bits/stdc++.h>
using namespace std;

int main(){
  // adjacency matrix(costly)
  // space-----> O(N^2)
  int n,m;
  cin>>n>>m;
  int adj[n+1][m+1];
  for(int i=0; i<m; i++){
    int u,v;
    cin>>u>>v;
    adj[u][v] = 1;
    adj[v][u] = 1;
  }


  // adjacency list(cheaper)
  // space-------> O(2*E)
  int n1, m1;
  cin>>n1>>m1;
  vector<int> adj1[m1+1];
  for(int i=0; i<m1; i++){
    int u, v;
    cin>>u>>v;
    adj1[u].push_back(v);
    adj1[v].push_back(u); // remove this line if graph is directed ---> space---> O(E)
  }
  return 0;
}