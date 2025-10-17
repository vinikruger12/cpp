#include <bits/stdc++.h>

using namespace std;
 
vector<int> a;

int avg(int l, int r){
    int soma = 0;
    int aux = max(l, r);
    int m = min(l, r);
    for(int i = m;i <= aux;i++){
        soma += a[i];
    }
    return 1/(aux-m+1) * soma;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        a.resize(n);
        for(int i = 0;i < n;i++)cin >> a[i];

        int res = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                res = max(res, avg(i, j));
            }
        }
        cout << res << endl;
    }
}