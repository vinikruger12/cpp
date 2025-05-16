#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, c;
        int valor1 = 0;
        int valor2 = 0;
        cin >> n >> c;
        vector<int> v(n);
        map<int, int> p;
        for(int i = 0;i < n;i++){
            cin >> v[i];
        }
       
        for(auto u:v){
            p[u]++;
        }

        for(auto a:p){
            valor1 += min(a.second, c);
        }
        valor2 = v.size();
        int menor = min(valor2, valor1);

        cout << menor << endl;
    }
}