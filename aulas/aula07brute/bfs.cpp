// BFS - Acha o menor caminho  (QUEUE) //

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

    queue<int> q;
    vector<int> dist(n+1, maxn), pai(n+1, -1);
    dist[1] = 0;
    q.emplace(1);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v:adj[u]){
            if(dist[u] + 1 < dist[v]){
                dist[v] = dist[u] + 1;
                q.emplace(v);
                pai[v] = u;
            }
        }
    }
    vector<int> res;
    int u = 6;
    res.emplace_back(u);
    while(u != 1){
        res.emplace_back(pai[u]);
        u = pai[u];
    }

    reverse(res.begin(), res.end());
    for(auto x:res){
        cout << x << " ";
    }
    cout << endl;
    
}