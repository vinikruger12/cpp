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


    vector<int> res((n+1), 0);
    queue<int> q;

    for(int i = 1;i <= n;i++){
        
        if(res[i] != 0) continue;

        res[i] = 1;
        q.emplace(i);

        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(auto v:adj[u]){
            if(res[v] == 0){
                if(res[u] == 1){
                 res[v] = 2;
                }
                else if(res[u] == 2){
                res[v] = 1;
                }

            q.emplace(v);
            }
            else if(res[u] == res[v]){
            cout << "IMPOSSIBLE" << endl;
            return 0;
            }
            

            
        }
    }

    }

    for(int i = 1;i <= n;i++){
        cout << res[i] << ' ';
    }
    cout << endl;


}