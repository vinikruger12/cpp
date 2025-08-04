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

    vector<int> pai[n+1];
    vector<bool> vis((n+1), false);   
    queue<int> q;

    for(int i = 1;i <= n;i++){
        
        if(!vis[i]){
        q.emplace(i);
        vis[i] = true;

        while(!q.empty()){

            int u = q.front();
            q.pop();

            for(auto v:adj[u]){
                vis[v] = true;
                q.emplace(v);
                pai[v] = u;
            }
        }
    }
    }

    vector<int> res;
    queue<int> qn;
    bool ver = false;

    for(int i = 1;i <= n;i++){

        qn.emplace(i);
        res.emplace_back(i);
        
        while(!qn.empty()){
            int u = qn.front();
            qn.pop();

            for(auto v:pai[u]){
                res.emplace_back(v);
                qn.emplace(v);
                if(i == pai[v]){ 
                    ver = true;
                    break;
            }
           
        }

        if(ver) break;
        else res.clear();

    }
}

    if(!ver) cout << "IMPOSSIBLE" << endl; 
    else{
        for(int i = 0;i < res.size();i++){
            cout << res[i] << ' ';
        }
        cout << endl;
    }

}