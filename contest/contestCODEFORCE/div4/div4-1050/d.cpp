#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        vector<int> oddsD;
        int res = 0;

        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i] % 2 != 0){
                oddsD.emplace_back(a[i]);
            }
            else res += a[i];
        }
      
        if(oddsD.size() < 1){
            cout << 0 << endl;
            continue;
        }


        sort(oddsD.begin(), oddsD.end());
        reverse(oddsD.begin(), oddsD.end());

        int l = 0, r = oddsD.size() - 1;

        while(l <= r){
            res += oddsD[l];
            l++;
            r--;
        }

        cout << res << endl;
    }
}