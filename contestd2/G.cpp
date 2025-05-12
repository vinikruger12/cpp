#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> mapa;
        for(auto a:s){
            mapa[a]++;
        }
        int soma = 0;
        for(auto u:mapa){
            if(u.second > 1){
                soma += u.second + 1;
            }else{
                soma += 2;
            }
        }

        cout << soma << endl;
    }
    }
