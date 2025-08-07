#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5+5;

vector<int> ans;
vector<int> adj[maxn], tam(maxn);
vector<bool> vis((maxn), false);

int dfs(int u){
    vis[u] = 1;
    for(auto v:adj[u]){
        if(!vis[v]){
            tam[u] += dfs(v) + 1;
        }
    }

    return tam[u];
}


int main(){
    int n; cin >> n;
    
    for(int i = 1;i < n;i++){
        int u; cin >> u;
        u--;
        adj[u].emplace_back(i);
    }

    dfs(0);

    for(int i = 0;i < n;i++){
        cout << tam[i] << ' ';
    }
    cout << endl;


}