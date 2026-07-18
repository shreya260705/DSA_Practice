#include<bits/stdc++.h>
using namepsace std;
vector<int> bfs(vector<vector<int>>&adj){
    vector<bool>visited(adj.size(),false);
    vector<int>ans;
    queue<int>q;
    q.push(0);
    visited[0]=true;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        for(auto it: adj[temp]){
            if(!visited[it]){
              visited[it]=true;
              q.push(it);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
