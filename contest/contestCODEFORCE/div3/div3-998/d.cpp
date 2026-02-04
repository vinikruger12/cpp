#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int aux = 1e9+7;
        int indice = 0;
        for(int i = 0;i < n;i++) cin >> a[i];

        for(int i = 1;i < n;i++){
                int arm = min(a[i-1], a[i]);
                a[i] -= arm;
                a[i-1] -= arm;
        }
        
        for(int i = 0;i < n;i++) cout << a[i] << ' ';
        cout << endl;

        bool ok = 1;
        for(int i = 1;i < n;i++){
            if(a[i-1] > a[i]) ok = 0;
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

}