#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int ans = 0;
        int k = 0;
        bool ok = 1;
        
        for(int i = 0;i < n;i++){
            string s; cin >> s;
            for(int j = 0;j < s.size();j++){
                k++;
                if(k > m) ok = 0;
            }
            if(ok) ans++;
        }
        cout << ans << endl;

    }

}