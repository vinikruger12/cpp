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
        for(int i = 0;i < n;i++) cin >> a[i];

        int neg = 0, zero = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == 0) zero++;
            else if(a[i] < 0) neg++;
        }

        if(zero > 0) cout << 0 << endl;
        else if(neg % 2 != 0) cout << 0 << endl;
        else{
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }
}