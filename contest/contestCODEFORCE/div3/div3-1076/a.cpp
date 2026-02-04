#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while(t--){
        int n, s, k; cin >> n >> s >> k;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        int sum = 0;
        for(int i = 0;i < n;i++) sum += a[i];

        bool ok = 0;
        if(sum == s) ok = 1;
        else if(sum > s) ok = 0;
        else{
            for(int i = 0;i < 100;i++){
                sum += k;
                if(sum == s) ok = 1;
            }
        }


        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}