#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n, j, k; cin >> n >> j >> k;
        vector<int> a(n);
        int maior = -1;
        int l = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i] >= maior){
                maior = a[i];
                l = i;
            }
        }
        if(a[j-1] == maior) l = j-1; 

        int conta = 0;
        for(int i = 0;i < n;i++){
            if(maior >= a[i] && i != (j-1) && i != l) conta++;
        }

        int m = n - conta;

        if(m <= k) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}