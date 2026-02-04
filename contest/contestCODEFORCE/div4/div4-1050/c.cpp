#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<pair<int, int>> pares(n+1);
        pares[0] = {0, 0};

        for(int i = 1;i <= n;i++){
            int a, b; cin >> a >> b;
            pares[i] = {a, b};
        }

        int res = 0;
        for(int i = 0;i < n;i++){
            int da = pares[i+1].first - pares[i].first;
            int db = abs(pares[i+1].second - pares[i].second);
            if(da % 2 == db % 2) res += da;
            else res += da - 1;
        }

        res += m - pares[n].first;
        cout << res << endl;
    }
}