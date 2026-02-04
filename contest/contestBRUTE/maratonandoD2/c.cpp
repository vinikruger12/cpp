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
        sort(a.begin(), a.end());

        if(n == 1){
            if(a[0] == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            if((a[n-1] - 1) == a[n-2] || a[n-1] == a[n-2]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

}