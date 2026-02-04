#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
vector<int> adj[maxn];

int main(){
    int n, m; cin >> n >> m;

    for(int i = 0;i < m;i++){
        int u,v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    int s,t; cin >> s >> t;

    queue<int> q;
    vector<int> dist(n+1, maxn), pai(n+1,-1);
    dist[s] = 0;
    q.emplace(s);

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

    if(pai[t] == -1 && t != s){
        cout << -1 << endl;
        return 0;
    }

    

    vector<int> res;
    int u = t;
    res.emplace_back(u);

    while(u != s){
        res.emplace_back(pai[u]);
        u = pai[u];
    }

    cout << (res.size() - 1) << endl;
    

}