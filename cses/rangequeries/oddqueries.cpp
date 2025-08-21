#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        vector<int> vec(n+1), pref(n+1);
        for(int i = 1;i <= n;i++) cin >> vec[i];

        pref[0] = 0;
        for(int i = 1;i <= n;i++){
            pref[i] = pref[i-1] + vec[i];
        }

        while(q--){
            int l, r, k; cin >> l >> r >> k;
            int tira;
            if(l != 1) tira = pref[r] - pref[l-1];
            else tira = pref[r];

            int vx = (r-l) + 1;
            int total = pref[n] - tira + (vx*k);

            if(total % 2 != 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }
}