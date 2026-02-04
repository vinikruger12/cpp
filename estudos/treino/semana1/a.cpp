#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);

        for(int i = 0;i < n;i++) cin >> a[i];
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());

        vector<pair<int, int>> pares;

        for(int i = 1;i < n;i += 2){
            int u = a[i-1] - a[i];
            pares.emplace_back(u, i);        
        }

        sort(pares.begin(), pares.end());   

        for(auto &p:pares){
            int u = p.first;
            int index = p.second;

            int soma = min(u, k);
            a[index] += soma;
            k -= soma;
        }

        int ans = 0;
        for(int i = 0;i < n;i++){
            if(i % 2 == 0) ans += a[i];
            else ans -= a[i];
        }


        cout << ans << endl;
    }
}