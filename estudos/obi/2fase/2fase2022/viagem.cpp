#include <bits/stdc++.h>

using namespace std;

const int maxn = 10000;
vector<int> adj[maxn];
map<pair<int,int>, int> dp;
map<pair<int,int>, pair<int, int>> pares;

int dfs(int x, int y){
    if(dp[{x,y}] != maxn) return dp[{x,y}];
    if(pares[{x,y}].first > 0){
    dp[{x,y}] = pares[{x,y}].first;
    }

    for(auto v:adj[x]){
        dp[{x,v}] = min(dfs(x,v) + pares[{x, v}].first, dp[{x,v}]);
    }

    return dp[{x,y}];
}


int main(){
    int valor, n, m; cin >> valor >> n >> m;

    for(int i = 0;i < m;i++){
        int u, v, t, p;
        cin >> u >> v >> t >> p;
        if(p <= valor){
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
            pares[{u,v}] = {t, p};
            pares[{v,u}] = {t, p};
        }
    }

    int x, y; cin >> x >> y;

    cout << dfs(x,y) << endl;
}