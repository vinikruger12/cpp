#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int x, y, k; cin >> x >> y >> k;
        int rx = 0, ry = 0, res = 0;
        rx = (x + k - 1)/k;
        ry = (y + k - 1)/k;

        int par = 2*max(rx,ry);
        int impar = 2*max(ry, rx - 1) + 1;
        res = min(par, impar);

        cout << res << endl;
    }

}