#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), c(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        for(int i = 0;i < n;i++) cin >> c[i];

        int res = 0;
        for(int i = 1;i < n;i++){
            if(a[i-1] > a[i]){
                if(c[i] <= c[i-1]) res += c[i];
                else res += c[i-1];
            }
        }
        cout << res << endl;
        
    }

}