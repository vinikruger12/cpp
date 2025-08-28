#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, x, y;

bool f(ll mid){
    
    if(mid < min(x,y)) return false;
    
    ll soma = 1;
    mid -= min(x,y);

    soma += (mid/x) + (mid/y);
    return soma >= n;
}

int main(){
    cin >> n >> x >> y;
    ll l = 0, r = max(x,y)*n;
    while(r > l + 1){
        ll mid = (l + r)/2;
        if(f(mid)){
            r = mid;
        }
        else l = mid;
    }

    cout << r << endl;


}