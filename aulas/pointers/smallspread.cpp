#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    deque<ll> dmin, dmax;
    ll l = 0, r = 0, res = 0;

    while(r < n){
        while(!dmin.empty() && a[r] <= a[dmin.back()]) dmin.pop_back();
        while(!dmax.empty() && a[r] >= a[dmax.back()]) dmax.pop_back();

        dmin.push_back(r);
        dmax.push_back(r);

        while(a[dmax.front()] - a[dmin.front()] > k){
            if(dmin.front() == l) dmin.pop_front();
            if(dmax.front() == l) dmax.pop_front();
            l++;
        }

        res += (r - l + 1);
        r++;
    }

    cout << res << endl;

}