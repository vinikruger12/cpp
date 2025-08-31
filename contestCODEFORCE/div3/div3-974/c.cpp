#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll> a;
ll n;


bool f(ll mid, ll soma){
    long double media = (long double) (soma + mid) / (long double) n;
    long double metade = media / 2.0; 

    ll tristes = 0;
    for(auto v:a){
        if(v < metade) tristes++;
    }

    return tristes > (long double) n/2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        cin >> n;
        a.resize(n);
        ll soma = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            soma += a[i];
        }


        if(n == 1 || n == 2){
            cout << -1 << endl;
            continue;
        }

        if(f(0, soma)){
            cout << 0 << endl;
            continue;
        }


        ll l = 0, r = 1e12;
        ll res = 0;
        while(r >= l){
            ll mid = (l+r)/2;
            if(f(mid, soma)){
                res = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << res << endl;
    }
}