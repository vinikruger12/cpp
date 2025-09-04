#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, t; cin >> n >> t;
    ll o = t;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    

    ll r = 0, l = 0, soma = 0, res = 0;
    
    while(r < n){
        soma += a[r];

        while(soma > t){
            soma -= a[l];
            l++;
        }

        res = max(res, (r - l + 1));

        r++;
    }

    cout << res << endl;
    
    
}