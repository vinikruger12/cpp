#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
vector<int> adj[maxn];
vector<bool> vis((maxn), 0);
vector<int> stc;
vector<int> ans;

void dfs(int u){
    vis[u] = 1; 
    stc.emplace_back(u);
    
    for(auto v:adj[u]){
        if(!vis[v]) dfs(v);
    }

}

int main(){
    int n, m; cin >> n >> m;
    for(int i = 0;i < m;i++){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    int x; cin >> x;
    dfs(x);

    cout << stc.size() << endl;
}