#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, bool>> a(n);
        for(int i = 0;i < n;i++) cin >> a[i].first;
        for(int i = 0;i < n;i++){
            if(i % 2 == 0) a[i].second = 1;
        }

        sort(a.begin(), a.end());
        bool ok = 1;
        for(int i = 1;i < n;i++){
            if(a[i - 1].second == a[i].second) ok = 0;
        }

        if(ok) cout << "YES" << endl;
        else cout << "No" << endl;
        
    }

}