#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int c; cin >> c;
        string cima, baixo; cin >> cima >> baixo;

        int conta = 0;

        for(int i = 0;i < c;i++){
            if((cima[i] == 'G' && baixo[i] == 'B') || (cima[i] == 'B' && baixo[i] == 'G')) conta++;
            else if(cima[i] == baixo[i]) conta++;
        }

        if(conta == c) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

}