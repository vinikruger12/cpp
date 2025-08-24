#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0;i < n;i++) cin >> a[i];
    cin >> b[0];

    if(n == 1){
        cout << "YES" << endl;
        return;
    }

    a[0] = min(a[0], b[0] - a[0]);
    for(int i = 1;i < n;i++){
        int menor = min(a[i], b[0] - a[i]);
        int maior = max(a[i], b[0] - a[i]);

        if(menor >= a[i-1]){
            a[i] = menor;
        }
        else{
            if(maior < a[i-1]){
                cout << "NO" << endl;
                return;
            }
            else a[i] = maior;
        }
    }

    cout << "YES" << endl;

}

int main(){
    int t; cin >> t;
    while(t--) solve();
}