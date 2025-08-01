    #include <bits/stdc++.h>

    using namespace std;

    const int maxn = 205; // já é mais que suficiente
    vector<int> adj[maxn];
    vector<int> alturas(maxn);
    vector<int> dp(maxn, -1); // memoização

    int dfs(int u) {
    if (dp[u] != -1) return dp[u];
    int max_path = 0;

    for (int v : adj[u]) {
        if (alturas[v] < alturas[u]) {
            max_path = max(max_path, 1 + dfs(v));
        }
    }

    return dp[u] = max_path;
}


    int main(){
        int s,t,p; cin >> s >> t >> p;
        
        for(int i = 1;i <= s;i++){
            cin >> alturas[i];
        }

        for(int i = 0;i < t;i++){
            int u, v; cin >> u >> v;
            if(alturas[u] > alturas[v]){
            adj[u].emplace_back(v);
            }else if(alturas[v] > alturas[u]){
                adj[v].emplace_back(u);
            }
        }

        cout << dfs(p) << endl;

    


}