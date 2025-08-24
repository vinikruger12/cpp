#include <bits/stdc++.h>

using namespace std;

void solve(){
    string f, s; cin >> f >> s;
        int n = f.size();
        int m = s.size();
        if(f[0] != s[0] || n > m || n*2 < m){
            cout << "NO" << endl;
            return;
        }

        vector<int> ff, ss;
        int conta = 1;
        for(int i = 1;i < n;i++){
            if(f[i] != f[i-1]){
                ff.emplace_back(conta);
                conta = 1;
            }
            else conta++;
        }
        ff.emplace_back(conta);
        conta = 1;

        for(int i = 1;i < m;i++){
            if(s[i] != s[i-1]){
                ss.emplace_back(conta);
                conta = 1;
            }
            else conta++;
        }
        ss.emplace_back(conta);

        if(ss.size() != ff.size()){
            cout << "NO" << endl;
            return;
        }

        for(int i = 0;i < ff.size();i++){
            if(ff[i] > ss[i] || ff[i]*2 < ss[i]){
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
}


int main(){
    int t; cin >> t;
    while(t--) solve();
    
}