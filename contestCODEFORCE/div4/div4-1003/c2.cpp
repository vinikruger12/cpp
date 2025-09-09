#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> a, b;
ll n, m;
const ll inf = 1e18;

ll busca(ll a, ll prev){
   ll melhor;
   if(a >= prev) melhor = a;
   else melhor = inf;
   ll indice = -1;
   ll l = 0, r = (m-1);
   while(r >= l){
    ll mid = (l+r)/2;
    if(b[mid] - a >= prev){
        indice = mid;
        r = mid - 1;
    }
    else l = mid + 1;
   }

   if(indice != -1) melhor = min(melhor, b[indice] - a);
   return melhor;
}


void solve(){
    cin >> n >> m;
    
    a.resize(n);
    b.resize(m);
    
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < m;i++) cin >> b[i];
    sort(b.begin(), b.end());
    
    vector<ll> c(n);
    c[0] = busca(a[0], -inf);
    for(int i = 1;i < n;i++){
        ll prev = c[i-1];
        c[i] = busca(a[i], prev);
    }

    for(int i = 0;i < n;i++){
        if(c[i] == inf) {
        cout << "NO\n";
        return;
        }
    }
    cout << "YES\n";      
}


int main(){
    int t; cin >> t;
    while(t--) solve();
}