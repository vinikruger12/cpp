#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 2e5 + 5;
ll t;
int n;

vector<ll> vec(maxn);

bool f(ll mid){
    ll soma = 0;
    for(int i = 0;i < n;i++){
        soma += mid/vec[i];
        if(soma >= t) return true; 
    }
    return false;
}

ll bb(ll l = 0, ll r = 1000000000000000000LL){
    ll res = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(f(mid)){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int main(){
    cin >> n >> t;
    for(int i = 0; i < n;i++) cin >> vec[i];

    cout << bb() << endl;

    return 0;
}