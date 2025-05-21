#include <bits/stdc++.h>

using namespace std;
const int maxn = 2e5 + 5;
vector<int> adj[maxn];

vector<bool> vis(maxn, false);

int dfs(int u){
    vis[u] = 1;
    for(auto v:adj[u]){
        if(!vis[i]){
          dfs(i);
        }
    }
}

int main(){
    int n, i; cin >> n;
    for(i = 1;i < n;i++){
        int u; cin >> u;
        adj[u-1].emplace_back(i);
    }

    vector<int> tamanho(n);

    




}