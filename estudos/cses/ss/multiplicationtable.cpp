#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n;

bool f(ll mid){
    ll soma = 0;
    for(int i = 1;i <= n;i++){
        soma += min((mid/i), n);
        if(soma >= (n*n + 1)/2) return true;
    }

    return false;
}


ll bb(ll l = 0, ll r = n*n){
    ll res = 0;

    while(l <= r){
        ll mid = (l+r)/2;
        if(f(mid)){
            r = mid - 1;
            res = mid;
        }
        else l = mid + 1;
    }

    return res;
}

int main(){
    cin >> n;
    cout << bb() << endl;
}