#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n,k,p; cin >> n >> k >> p;
        int div = k/p;
        int res = div;
        res = abs(res);
        if(abs(k) - (res*p) > 0) res++;
        if(res > n) cout << -1 << endl;
        else cout << res << endl;

    }
    
}