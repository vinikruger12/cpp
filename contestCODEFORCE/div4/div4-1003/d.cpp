#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n);
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                int k; cin >> k;
                a[i].emplace_back(k);
            }
        }


        vector<pair<pair<int, int>, int>> somas(n);
        for(int i = 0;i < n;i++){
            int arm1 = 0, arm2 = 0;
            for(int j = 0;j < m;j++){
                arm1 += a[i][j];
                arm2 += arm1;
                somas[i] = {{arm1, arm2}, i};
            }
        }

        sort(somas.begin(), somas.end());
        reverse(somas.begin(), somas.end());
  
        int somaP = 0;
        int res = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                somaP += a[somas[i].second][j];
                res += somaP;
            }
        }

        cout << res << endl;
        
    }
}