#include <bits/stdc++.h>

using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b; cin >> n >> a >> b;
    vector<int> e(n);
    cin >> e[0];
    for(int i = 1;i < n;i++){
        int c; cin >> c;
        e[i] = e[i-1] + c;
    }

    int k; cin >> k; k--;
    for(int i = 0;i < n;i++){
        if(e[i] + a >= b + e[k] && i != k){
            cout << "SIM\n";
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "NAO\n";
}