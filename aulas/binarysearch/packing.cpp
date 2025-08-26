#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll w, h, n;

bool f(ll mid){
    ll largura = 0;
    ll altura = 0;
    ll soma = 0;
        largura += (mid/w);
        altura += (mid/h);
        soma += largura*altura;
        if(soma >= (n)) return true;
    return soma >= (n);
}

int bb(ll l = 0, ll r = 1000000000000000000LL){
    ll res = 0;
    while(l <= r){
        ll mid = (l+r)/2;
        if(f(mid)){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int main(){
    cin >> w >> h >> n;
    cout << bb()<< endl;
}