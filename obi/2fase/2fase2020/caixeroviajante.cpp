#include <bits/stdc++.h>

using namespace std;

const int maxn = 1124350;
vector<int> adj[maxn];

map<pair<int,int>, int> pares;
vector<bool> vis((maxn), false);

vector<int> dp((maxn), -1);

int dfs(int u){

    dp[u] = 0;

    for(auto v:adj[u]){
        dp[u] = min(dfs(v) + pares[{u,v}] + dp[u], dfs(v) + pares[{v,u}] + dp[u]); 
    }

    return dp[u];
}


int main(){
    int n; cin >> n;
    int k = (n * (n-1))/2;

    

    for(int i = 0;i < k;i++){
        int u, v, t; cin >> u >> v >> t;
        
        if(u == (v - 1) || (v + 1) == u){
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
            pares[{u,v}] = t;
            pares[{v,u}] = t;
        }
        else if(u > v){
            adj[v].emplace_back(u);
            pares[{v,u}] = t;
        }
        else if(v > u){
            adj[u].emplace_back(v);
            pares[{u,v}] = t;
        }
    }

    vector<int> res;

    for(int i = 1; i <= k;i++){
        dfs(i);
    }

    for(int i = 1; i <= k;i++){
        res.emplace_back(dp[i]);
    }

    sort(res.begin(), res.end());

    for(int i = 1; i <= k;i++){
        cout << res[i] << ' ';
    }
}