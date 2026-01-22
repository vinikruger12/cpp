#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e5+5;
vector<int> adj[maxn];
const int INF = 1e9;


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    
    for(int i = 0;i < m;i++){
        int u,v; cin >> u >> v;
        --u;
        --v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    vector<unordered_set<int>> vis(n);

    queue<pair<int,int>> q;
    q.push({0, 0});
    vis[0].insert(0);

    int dist = 0;

    while(!q.empty()){
        int sz = q.size();
        while(sz--){
            auto [u, t] = q.front();
            q.pop();

            if(u == n-1){
                cout << dist << endl;
                return 0;
            }

            for(int v : adj[u]){
                int nt = t + (a[u] != a[v]);
                if(nt > k) continue;

                if(!vis[v].count(nt)){
                    vis[v].insert(nt);
                    q.push({v, nt});
                }
            }
        }
        dist++;
    }

    cout << -1 << endl;
}