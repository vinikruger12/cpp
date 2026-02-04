#include <bits/stdc++.h>
#define ll long long
using namespace std;

int vec[200010];

int n, q;

bool f(ll mid){
    ll soma = 0;
    for(int i = 0;i < n;i++){
        soma += mid/vec[i];
        if(soma >= q) return true;
    }
    return soma >= q;
}

ll bb(ll l = 1, ll r = 1000000000000000000LL){
    ll res = -1;
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
    cin >> n >> q;
    for(int i = 0;i < n;i++) cin >> vec[i];
    
    cout << bb() << endl;
    return 0;
}