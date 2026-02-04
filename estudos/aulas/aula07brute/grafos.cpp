// DFS - Passa em todos mas não se repete  (STACK) Sobe e desce //
//Graph editor

#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5; //Contante maxima
vector<int> adj[maxn]; // Equivalente a vetor<vector<int>> adj(maxn);
vector<bool> vis(maxn, false); // false reduntante porque no c++ ja vem


void dfs(int u){
    vis[u] = 1;
    for(auto v:adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int main(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < m;i++){
        int u,v;
        cin >> u >> v; //dois nodos conectados por uma aresta 
        adj[u].emplace_back(v);
        // caso for bidirecional adj[v].emplace_back(u); //
    }
}