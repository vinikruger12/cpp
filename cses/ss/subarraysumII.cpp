#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> vec(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    ll soma = 0;
    map<ll, int> mapa;
    ll res = 0;
    mapa[0] = 1;

    for(int i = 0;i < n;i++){
        soma += vec[i];
        res += mapa[soma - x];
        ++mapa[soma];
    }

    cout << res << endl;
}