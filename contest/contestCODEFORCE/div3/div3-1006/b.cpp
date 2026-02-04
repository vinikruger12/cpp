#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> mapa;
        for(int i = 0;i < n;i++) mapa[s[i]]++;
        int a = mapa['-']/2;
        int b = mapa['-'] - a;
        cout << mapa['_'] * a * b << endl;
    }
}