#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> mapa;

        for(int i = 0;i < n;i++) mapa[s[i]]++;

        float real = sqrt(n);
        int inteiro = sqrt(n);
        if(real != inteiro) cout << "NO" << endl;
        else{
            int k = (inteiro*2) + ((inteiro-2)*2);
            int j = n - k;
            
            
            if(mapa['1'] == k && mapa['0'] == j) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}