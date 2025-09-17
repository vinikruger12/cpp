#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int x, y; cin >> x >> y;
        vector<int> a(n), b(m);
        for(int i = 0;i < n;i++) cin >> a[i];
        for(int i = 0;i < m;i++) cin >> b[i];

        cout << n + m << endl;
    }
}