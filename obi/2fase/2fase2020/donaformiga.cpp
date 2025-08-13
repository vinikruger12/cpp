#include <bits/stdc++.h>

using namespace std;

const int maxn = 200;
vector<int> adj[maxn];
vector<int> dp((maxn), -1);


int dfs(int u){
    if(dp[u] != -1) return dp[u];

    dp[u] = 1;
    
    for(auto v:adj[u]){
        dp[u] = max(dfs(v) + 1, dp[u]);
    }

    return dp[u];
    
}




int main(){
    int s, t, p; cin >> s >> t >> p;
    vector<int> a(s);

    for(int i = 0;i < s;i++){
       cin >> a[i];
    }


    for(int i = 0;i < t;i++){
        int u, v; cin >> u >> v;
        u--;
        v--;
        if(a[u] > a[v]) adj[u].emplace_back(v);
        else if(a[u] < a[v]) adj[v].emplace_back(u);
    }


    dfs(p-1);

    cout << (dp[p-1] - 1) << endl;
}