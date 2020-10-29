#include<bits/stdc++.h>
using namespace std;
const int mxn=100001;
bool vis[mxn];
int dfs(vector<int> adj[], int parent,bool vis[]) {
    vis[parent] = 1;
    int ans = 0;
    for(int ch : adj[parent]) {
        if(vis[ch]==0) {
            ans = 1 + dfs(adj,ch,vis);   
        }
    }
    return ans;
}
int main() {
    int n,d;
    cin>>n>>d;
    vector<int> adj[n+1];
   
    for(int i=0;i<d;i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    int ans = INT_MAX;
    //memset(vis, 0, sizeof (vis));
    cout<<dfs(adj,1,vis);  
    cout<<ans;
    return 0;
}
