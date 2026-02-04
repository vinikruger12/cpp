#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        map<int, int> mapa;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            mapa[a[i]]++;
        }   

        int ans = 0;
        for(int i = 0;i <= n;i++){
            if(mapa[i] == 0){
                if(i < k) ans++;
            }
        }
        
        if(mapa[k] - ans > 0) ans += (mapa[k] - ans);
        cout << ans << endl;
    }
}