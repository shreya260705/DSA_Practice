#include <bits/stdc++.h>
class Solution {
private:
    bool detect(int src, vector<vector<int>>& adj, vector<int>& vis) {
        vis[src] = 1;

        queue<pair<int,int>> q;
        q.push({src, -1});

        while(!q.empty()) {
            auto [node, parent] = q.front();
            q.pop();

            for(auto neigh : adj[node]) {
                if(!vis[neigh]) {
                    vis[neigh] = 1;
                    q.push({neigh, node});
                }
                else if(neigh != parent) {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adj(V);

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(V, 0);

        for(int i = 0; i < V; i++) {
            if(!vis[i] && detect(i, adj, vis))
                return true;
        }

        return false;
    }
};