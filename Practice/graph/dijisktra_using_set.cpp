class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<vector<pair<int,int>>>adj(V);
        for(auto it: edges){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
            
        }
        // Code here
        set<pair<int,int>>st;
        vector<int>dist(V,INT_MAX);
        dist[src]=0;
        st.insert({0,src});
        while(!st.empty()){
            auto it=*st.begin();
            int dis=it.first;
            int node=it.second;
            st.erase(it);
            for(auto it:adj[node]){
                int edg=it.first;
                int adj=it.second;
                if(dist[edg]>dis+adj){
                    if(dist[edg]!=INT_MAX){
                        st.erase({dist[edg],edg});
                    }
                    dist[edg]=dis+adj;
                    st.insert({dist[edg],edg});
                    
                }
            }
        }
        
        for(int i=0;i<=V;i++){
            if(dist[i]==INT_MAX){
                return {};
            }
        }
        return dist;
    }
};