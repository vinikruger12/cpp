#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll contaImpar(ll n){
    return (n + 1) /2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
    int n, k; cin >> n >> k;
        
    ll l = max(1, n - k + 1);
    ll r = n;

    ll soma = contaImpar(r) - contaImpar(l - 1);

    if(soma % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}
