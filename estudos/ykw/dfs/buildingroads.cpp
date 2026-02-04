#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
vector<int> adj[maxn];

vector<int> stc;
vector<bool> vis((maxn), false);
vector<int> ans;

void dfs(int u){
    
    if(!vis[u]){
    stc.emplace_back(u);
    vis[u] = 1;
    }

    for(auto v:adj[u]){
        
        if(!vis[v]){
         vis[v] = true;
         dfs(v); 
    }
    }

    while(!stc.empty()){
        ans.emplace_back(stc.back());
        stc.pop_back();
    }

}


int main(){
    int n, m; cin >> n >> m;
    for(int i = 0;i < m;i++){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    for(int i = 1;i <= n;i++){
        if(!vis[i]) dfs(i);
    }

    cout << (ans.size() - 1) << endl;
    for(int i = 1;i < ans.size();i++){
        cout << ans[i-1] << ' ' << ans[i] << endl;
    }

}