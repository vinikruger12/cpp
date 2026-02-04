#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, q; cin >> n >> q;
    vector<ll> vec(n), pref(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    pref[0] = vec[0];
    for(int i = 1;i < n;i++){
        pref[i] = pref[i-1] + vec[i];
    }

    while(q--){
        int a, b; cin >> a >> b;
        b--;
        a--;
        if(a != 0) cout << pref[b] - pref[a-1] << endl;
        else cout << pref[b] << endl;
    }
}