#include <iostream>
using namespace std;
int main (){
    int n,e;
    cin>>n;
    cin>>e;
    unordered_map<int,list<int>>adj;
    for(int i=0;i<=n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"List"<<endl;
    for(auto it:adj){
        cout<<it.first<<"->";
        for(auto j:it.second){
            cout<<j<<"";
        }
        cout<<endl;
    }
}
