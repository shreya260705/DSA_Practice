#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&ans){
    vis[node]=1;
    ans.push_back(node);
    for(auto it: adj[node]){
        if(!visited[it]){
            dfs(it,adj,vis,ans);
        }
    }
}
vector<int>dfsgraph(vector<int>adj[]){
    vector<int>vis(adj.size(),0);
    vector<int>ans;
    dfs(0,adj,vis,ans);
    return ans;
    
}