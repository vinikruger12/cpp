#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, l; cin >> a >> l;
    map<int, int> posi;
       int multi = a*l;
    int n; cin >> n;
    int pega_indice;
    int armazena;
    for(int i = 1;i <= n;i++){
        int b, c; cin >> b >> c;
        if((b*c) >= multi){
            posi[i] = (b*c);
            pega_indice = i;
            armazena = b*c;
        }
    }

    for(auto u:posi){
        
        if(armazena == u.second){
            pega_indice = min(u.first, pega_indice);
        }
        else if(armazena > u.second){
            pega_indice = u.first;
            armazena = u.second;
        }

    }


    if(posi.size() == 0){
        cout << -1 << endl;
    }else{
        cout << pega_indice << endl;
    }
}