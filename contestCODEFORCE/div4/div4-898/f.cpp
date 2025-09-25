#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n), h(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        for(int i = 0;i < n;i++) cin >> h[i];
    
        int res = 0, soma = 0;
        int l = 0;
        for(int r = 0;r < n;r++){
            if(r > 0 && h[r-1] % h[r] != 0){
                l = r;
                soma = 0;
            }

            soma += a[r];

            while(soma > k){
                soma -= a[l];
                l++;
            }

            res = max(r - l + 1, res);
        }


        cout << res << endl;
    }
}