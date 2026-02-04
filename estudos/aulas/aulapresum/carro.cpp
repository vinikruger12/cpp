#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q; cin >> n >> q;
    vector<int> carro(n+1, 0), pontos(100005, 0);
    vector<int> prefsum(n+1);

    for(int i = 0;i < n;i++){
        cin >> carro[i];
        ponto[carro[i]]++;
    }

    for(int i = 1;i < n;i++){
        prefsum[i] = prefsum[i-1] + pontos[carro[i]];
    }

    int l, r; cin >> l >> r;
    cout << prefsum[r] - prefsum[l-1] << endl;
}