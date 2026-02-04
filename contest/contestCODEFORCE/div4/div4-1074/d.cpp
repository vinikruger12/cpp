#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, m, h; cin >> n >> m >> h;

        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        vector<int> original(n);

        for(int i = 0;i < n;i++) original[i] = a[i];

        vector<pair<int, int>> pares(m);
        for(int i = 0;i < m;i++){
            int x, y; cin >> x >> y;
            x--;
            a[x] += y;

            if(a[x] > h){
               a = original;
            }
        }

        for(int i = 0;i < n;i++){
            cout << a[i] << ' ';
        }
        cout << endl;

    }
}