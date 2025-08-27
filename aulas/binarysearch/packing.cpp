#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, w, h;

bool f(int mid){
    __int128 alt = mid/h;
    __int128 lar = mid/w;
    return alt * lar >= n;
}

signed main(){
    cin >> w >> h >> n;
    int l = 0, r = 1;
    while(!f(r)) r *= 2;

    while(r - l > 1){
        int mid = l + (r-l)/2;
        if(f(mid)){
            r = mid;
        }
        else l = mid;
    }

    if(f(r)) cout << r << endl;
    else cout << l << endl;
}