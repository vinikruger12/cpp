#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;
vector<int> adj[maxn];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    vector<int> res;
    vector<bool> vis((n+1), false);

    for(int i = 1;i <= n;i++){

        if(!vis[i]){
            res.emplace_back(i);
            vis[i] = true;
            queue<int> q;
            q.emplace(i);

            while(!q.empty()){
                int u = q.front();
                q.pop();

                for(auto v:adj[u]){

                    if(!vis[v]){
                        vis[v] = true;
                        q.emplace(v);
                    }

                }
            }
        }

    }

    cout << res.size() - 1 << endl;
    for(int i = 1;i < res.size();i++) cout << res[i-1] << " " << res[i] << endl; 



}