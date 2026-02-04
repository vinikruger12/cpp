#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    vector<ll> vec(n+1), vecSORTED(n+1);
    vector<ll> pref(n+1), prefSORTED(n+1);

    for(int i = 1;i <= n;i++){
        cin >> vec[i];
        vecSORTED[i] = vec[i];
    }

    sort(vecSORTED.begin(), vecSORTED.end());

    pref[0] = 0;
    prefSORTED[0] = 0;
    for(int i = 1;i <= n;i++){
        pref[i] = pref[i-1] + vec[i];
        prefSORTED[i] = prefSORTED[i-1] + vecSORTED[i];
    }

    int m; cin >> m;
    while(m--){
        int t, l, r; cin >> t >> l >> r;

        if(t == 1){
            cout << pref[r] - pref[l-1] << endl;
        }
        else if(t == 2){
            cout << prefSORTED[r] - prefSORTED[l-1] << endl;
        }
    }
}