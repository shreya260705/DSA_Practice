void dfs(int node,vector<vector<int>>&roads,vector<bool>&visited){
   visited[node]=true;
    
    for(int i=0;i<roads.size();i++){
        if(!visited[i]&&roads[node][i]==1){
            dfs(i,roads,visited);
        }
    }
}
int findNumOfProvinces(vector<vector<int>>& roads, int n) {
    vector<bool>visited(n,false);
    int count=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            count++;
            dfs(i,roads,visited);
        }
    }
    return count;
    // Write your code here.
}