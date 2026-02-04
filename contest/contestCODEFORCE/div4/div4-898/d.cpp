#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int r = 0, l = 0;
        int res = 0;
        while(r < n){
            if(s[r] == 'B'){
                int o = k;
                while(o--){
                    r++;
                }
                res++;
            }
            else r++;
        }
        cout << res << endl;
    }
}