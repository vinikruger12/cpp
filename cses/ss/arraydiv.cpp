#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
vector<ll> a;

bool f(ll mid){
    int contaK = 0;
    ll soma = 0;
    for(int i = 0;i < n;i++){
        soma += a[i];
        if(soma > mid){
            contaK++;
            soma = a[i];
        }
    }    
    contaK++;

    if(k >= contaK) return true;
    else return false;

}


int main(){
    cin >> n >> k;
    a.resize(n);
    ll maior = 0;
    ll soma = 0;
    for(int i = 0;i < n;i++){ 
        cin >> a[i];
        maior = max(maior, a[i]);
        soma += a[i];
    }

    ll l = maior;
    ll r = soma;    
    ll res = 0;
    while(r >= l){
        ll mid = (l+r)/2;
        if(f(mid)){
            r = mid - 1;
            res = mid;
        }
        else l = mid + 1;
    }

    cout << res << endl;
}