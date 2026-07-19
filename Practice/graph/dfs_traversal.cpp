#include<bits/stdc++.h>
using namespace std;
vector<int>dfs(vector<vector<int>>&adj){
    vector<int>visited(adj.size(),false);
    vector<int>ans;
    stack<int>st;
    st.push(0);
    visited[0]=true;
    while(!st.empty()){
        int temp=st.top();
        st.pop();
        ans.push_back(temp);
        // for(auto it:adj[temp]){
        // for (int i = 0; i < adj[temp].size(); i++) {
        for (int i =adj[temp].size()-1; i>=0 ;i--) {
            int it = adj[temp][i];
            if(!visited[it]){
                visited[it]=true;
                st.push(it);
            }
        }
       
    }
    return  ans;
}



