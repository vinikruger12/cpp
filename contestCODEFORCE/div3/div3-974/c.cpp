#include <bits/stdc++.h>

using namespace std;

int tristes, maior, n, posicaoMeio, somaFortuna;
vector<int> a;
bool f(int mid){
    double prim = ((maior+mid)/n*2);
    return prim >= a[tristes];
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        a.resize(n);

        for(int i = 0;i < n;i++){
            cin >> a[i];
            maior = max(maior, a[i]);
            somaFortuna += a[i];
        }
        sort(a.begin(), a.end());
        somaFortuna = somaFortuna/(2*n);
        tristes = 0;

        for(int i = 0;i < n;i++){
            if(somaFortuna > a[i]) tristes++;
        }

        int l = 0, r = 1e9;
        if(n == 1) cout << -1 << endl;
        else{
            while(r - l > 1){
                int mid = (l+r)/2;
                if(f(mid)){
                    r = mid;
                }
                else l = mid;
            }

            cout << r << endl;
        }

    }
}