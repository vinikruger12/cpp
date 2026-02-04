#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main(){
    int n,q;
    cin >> n >> q;

    vector<int>vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    vector<long long> pref(n);
    pref[0] = vec[0];

    for(int i = 1; i < n;i++){
    pref[i] = pref[i-1] + vec[i];        
    }

    while(q--){
        int x, y;
        cin >> x >> y;

        long long resp = 0;

        int l = x-y;
        int r = x-1;

        if (l == 0) {
            resp = pref[r];
        } else {
            resp = pref[r] - pref[l - 1];
        }

        cout << resp << endl;

    }

}