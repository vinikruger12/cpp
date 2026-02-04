#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];

        int res = 1e9;
        for(int i = 0;i < n;i++){
            int ans = 0;
            for(int j = i; j < n;j++){
                if(abs(a[i] - a[j]) <= k) ans++;
            }       
            res = min(res, n - ans);
        }
        cout << res << endl;
    }

}