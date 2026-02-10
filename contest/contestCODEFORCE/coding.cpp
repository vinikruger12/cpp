#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, w; cin >> n >> w;
        cout << ((w-1) * (int)(n/w)) + (n % w) << endl;
    }
    
}

