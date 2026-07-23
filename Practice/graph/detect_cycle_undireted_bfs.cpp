#include <bits/stdc++.h>
using namespace std;
class Solution{
    bool bfs(int node,vector<vector<int>>adj(V),vector<bool>visited){
          queue<int>q;
          unordered_map<int,int>parent;
          visited[node]=true;
          q.push(node);
          parent[node]=-1;
          while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(auto it:adj[temp]){
                if(!visited[it]){
                    visited[it]=true;
                    q.push(it);
                    parent[it]=temp;
                }
                else if(parent[temp]!=it) return true;
            }

          }
          return false;

    }
    bool iscycle(int V,vector<vector<int>>&edges){
        vector<vector<int>>adj(V);
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited(i)){
                 if(bfs(i,adj,visited)){
                    return true;
                 }
            }
        }
        return false;
    }
}