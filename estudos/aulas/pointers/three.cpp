#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    ll l = 0, r = (n-1), somaR = 0, somaL = 0, res = 0;
    somaR += a[r];
    somaL += a[l];

    while(r > l){
        if(somaR > somaL){
            l++;
            somaL += a[l];
        }    
        else if(somaL > somaR){
            r--;
            somaR += a[r];
        }
        else if(somaL == somaR){
            res = max(res, somaL);
            r--;
            somaR += a[r];
        }
    }

    cout << res << endl;
}