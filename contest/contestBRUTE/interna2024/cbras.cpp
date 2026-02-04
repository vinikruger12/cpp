#include <bits/stdc++.h>

using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s; cin >> s;
    int m = s.size();
    vector<vector<int>> pares(26, vector<int> (26));
    int n; cin >> n;

    while(n--){
        char a, b; cin >> a >> b;
        pares[a - 'a'][b - 'a']++;
    }

    bool flag = 1;
    for(int i = 0;i < m-1;i++){
        if(!pares[s[i] - 'a'][s[i+1] - 'a']){
            flag = 0;
            break;
        }
    }

    cout << (flag ? "SIM\n" : "NAO\n");
}