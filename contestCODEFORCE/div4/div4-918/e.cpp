#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0;i < n;i++) cin >> vec[i];
        map<long long, long long> mapa;
        mapa[0] = 1;
        bool ver = 0;

        for(int i = 0;i < n;i++){
            if(i % 2 == 0){
                vec[i] = -1 * vec[i];
            }
        }

        long long soma = 0;
        for(int i = 0;i < n;i++){
            soma += vec[i];
            if(mapa[soma]){
            ver = 1;
            }

            mapa[soma]++;
        }   


        if(ver) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}