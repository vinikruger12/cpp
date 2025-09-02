#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    ll l = 0, r = 0, maximo = a[0], minimo = a[0], res = 0;

    while(r < n){
        if(maximo - minimo <= k){
            res += (r - l + 1);
            r++;
            maximo = max(a[r],maximo);
            minimo = min(a[r], minimo);
        }
        else{
            if(a[l] == minimo) minimo = 1e9;
            if(a[l] == maximo) maximo = -1;
            l++;
            minimo = min(minimo,a[l]);
            maximo = max(maximo,a[l]);
        }
        cout << res << ' ' << l << ' ' << r << ' ' << maximo - minimo << endl;
    }

    cout << res << endl;

}