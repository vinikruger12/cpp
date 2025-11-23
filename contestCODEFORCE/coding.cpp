#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        bool ok = 1;
        
        for(int i = 1;i < n;i++){
            if(abs(a[i] - a[i-1]) != 5 && abs(a[i] - a[i-1]) != 7) ok = 0;
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}