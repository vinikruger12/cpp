#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<int> res(n*2+1);
    vector<bool> vis(n*2+1, false);

    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            int x; cin >> x;
            res[i + j] = x;
            vis[x] = 1;
        }
    }


    for(int i = 1;i <= n*2;i++){
        if(res[i] != 0) cout << res[i] << ' ';
        else{
            for(int j = 1;j <= n*2;j++){
                if(!vis[j]){
                    cout << j << ' ';
                    vis[j] = 1;
                    break;
                }
            }
        } 
    }

    cout << endl;   
}
}