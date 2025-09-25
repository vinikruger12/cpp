#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> a;

ll n, x;
bool f(ll mid){
    ll res = 0;
    for(ll i = 0;i < n;i++){
        if(mid > a[i]) res += (mid - a[i]);
    }

    if(res <= x) return true;
    else return false;
}


signed main(){
    ll t; cin >> t;
    while(t--){
        cin >> n >> x;
        a.resize(n);
        for(ll i = 0;i < n;i++) cin >> a[i];

        ll l = 1, r = 1e12;
        ll res = 1;
        while(l <= r){
            ll mid = (l+r)/2;
            if(f(mid)){
                res = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        cout << res << endl;
    }
}