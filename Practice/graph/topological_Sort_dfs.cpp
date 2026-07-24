class Solution {
  public:
  void dfs(int node, vector<vector<int>>&adj,vector<bool>&visited,stack<int>&st){
      visited[node]=true;
      for(auto it:adj[node]){
          if(!visited[it]){
              dfs(it,adj,visited,st);
          }
      }
      st.push(node);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(V);
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
        }
        vector<bool>visited(V,false);
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,visited,st);
            }
        }
        while(!st.empty()){
            int temp=st.top();
            st.pop();
            ans.push_back(temp);
        }
        return ans;
    }
};