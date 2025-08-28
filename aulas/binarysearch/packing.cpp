#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a, b, n;

bool f(ll mid){
    return (mid/a) * (mid/b) >= n;
}


int main(){
    cin >> a >> b >> n;
    ll r = 1;
    ll l = 0;

    while(!f(r)) r *= 2;
   
    while(r - l > 1){
        ll mid = l + (r-l)/2;
        if(f(mid)){
            r = mid;
        }
        else l = mid;
    }
    
    if(f(r)) cout << r << endl;
    else cout << l << endl;

}