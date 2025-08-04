#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
vector<int> adj[maxn];

int main(){
    int n,m; cin >> n >> m;
    for(int i = 0;i < m;i++){
        int u, v;cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    queue<int> q;
    q.emplace(1);
    vector<int> pai((n+1), -1);
    vector<bool> vis((n+1), false);

 for(int i = 1;i <= n;i++){
    if(!vis[i]){
        vis[i] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v:adj[u]){
            if(!vis[v]){
            vis[v] = true;
            pai[v] = u;
            q.emplace(v);
            }
        }
    }
}
}

    if(pai[n] == -1){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    int u = n;
    vector<int> res;
    
    while(u != 1){
        res.emplace_back(u);
        u = pai[u];
    }

    res.emplace_back(1);
    reverse(res.begin(), res.end());

    cout << res.size() << endl;
    for(int i = 0;i < res.size();i++){
        cout << res[i] << ' ';
    }
    cout << endl;

}