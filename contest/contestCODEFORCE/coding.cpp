#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, int> freq; 
        for(int i = 0;i < n;i++){
            int u; cin >> u;
            freq[u]++;
        }

        if(freq[67] >= 1) cout << "YES" << endl;
        else cout << "NO" << endl;

    } 
}

