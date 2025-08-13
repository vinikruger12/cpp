#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5+5;
vector<int> adj[maxn];

int main(){
    int n, m; cin >> n >> m;

    for(int i = 0;i < m;i++){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    vector<int> pai((maxn), -1), dist((maxn), maxn);
    pai[1] = 0;
    dist[1] = 0;

    queue<int> q;
    q.emplace(1);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v:adj[u]){
            if(dist[u] + 1 < dist[v]){
            dist[v] = dist[u] + 1;            
             pai[v] = u;
            q.emplace(v);
            }
        }
    }

     if(pai[n] == -1){
        
        cout << "IMPOSSIBLE" << endl;
        return 0;
}

    vector<int> res;
    
    int u = n;

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