#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, s; cin >> s >> t;

    set<pair<int, int>> tuneis;
    for(int i = 0;i < t;i++){
        int x, y; cin >> x >> y;
        tuneis.insert({x, y});
        tuneis.insert({y, x});
    }

    int p; cin >> p;
    bool verifica = true;
    int tt = 0;
    while(p--){
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n;i++){
           cin >> vec[i];
        }

        for(int i = 1; i < n;i++){
            int a = vec[i-1];
            int b = vec[i];

            if(tuneis.find({a, b}) == tuneis.end()){
                verifica = false;
            }
        }

        if(verifica){
            tt++;
    }

    }
          cout << tt << endl;
}