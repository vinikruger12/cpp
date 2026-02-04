#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    long long res = 0;
    vector<int> vec(n), pref(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }


    map<long long, long long> mapa;
    mapa[0]++;
    long long soma = 0;
    for(int i = 0;i < n;i++){
        soma += vec[i];
        res += mapa[soma - x];
        mapa[soma]++;
    }
    
    cout << res << endl;
    
}