#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll> a;
int n, maior = 0, posicao;


bool f(ll mid, int maisMetade, ll somaTotal){
    long double soma = (somaTotal + mid) / (long double) n;
    long double media = soma / 2.0;

    int tristes = 0;
    for(ll v:a){
        if(v < media) tristes++;
    }

    return tristes > n/2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; cin >> t;
    while(t--){
    cin >> n;
    a.resize(n);
    ll somaTotal = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        somaTotal += a[i];
    }

    sort(a.begin(), a.end());
    
    if(n == 1 || n == 2){
        cout << -1 << endl;
        continue;
    }

     if (f(0, (n/2)+1, somaTotal)) {
            cout << 0 << endl; 
            continue;
        }

        ll l = 0, r = 1e12;
        ll res = -1;

        while(r >= l){
            ll mid = (l+r)/2;
            if(f(mid, (n/2)+1, somaTotal)){
                r = mid - 1;
                res = mid;
            }
            else{
                l = mid + 1;
            }
        }
        cout << res << endl;
        }
}