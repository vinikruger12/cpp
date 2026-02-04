#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, s, m; cin >> n >> s >> m;
        vector<pair<int, int>> pares(n);
        for(int i = 0;i < n;i++){
            int l, r; cin >> l >> r;
            pares[i] = {l, r};
        }

        sort(pares.begin(), pares.end());


        if(pares[0].first >= s){
            cout << "YES" << endl;
            continue;
        }
        bool ok = 0;
        for(int i = 1;i < n;i++){
            if(pares[i].first - pares[i-1].second >= s){
                ok = 1;
            }
        }

        if(ok){
            cout << "YES" << endl;
            continue;
        }

        if(m - pares[n-1].second >= s){
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
        
    }
}