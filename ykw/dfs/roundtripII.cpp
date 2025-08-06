#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
vector<int> adj[maxn];
vector<bool> vis((maxn), 0);
vector<int> ans;
vector<int> stc;
bool f = 0;
bool zero = false;

void dfs(int u, int p = -1){
    if(f) return;
    vis[u] = 1;
    stc.emplace_back(u);

    for(auto v:adj[u]){
        if(f) return;
        if(!vis[v]) dfs(v, u);
        else{
                f = 1;
                ans.emplace_back(v);
                while(v != stc.back()){
                    if(stc.size() == 0){
                         zero = 1 ;
                    }
                    ans.emplace_back(stc.back());
                    stc.pop_back();
                    
                }
                ans.emplace_back(v);
        }
    }
    if(f) return;
    stc.pop_back();
}

int main(){
    int n, m; cin >> n >> m;
    for(int i = 0;i < m;i++){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
    }

    for(int i = 1;i <= n;i++){
        if(!vis[i]) dfs(i);
    }

    

    if(ans.size() == 0 || zero){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        reverse(ans.begin(),ans.end());
        cout << ans.size() << endl;
        for(int i = 0;i < ans.size();i++){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
}