#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int n; cin >> n;
    int receba = n;
    n--;

    char u, v; cin >> u >> v;
    int conta = 0;
    int tamanho = s.size();
    char a, b; 
    string sapo = "";

    while(n--){
        cin >> a >> b;
        sapo += a;
        sapo += b;
    }


      
        bool ver = false;
        int j = 1;

        for(int i = 1;i < tamanho;i++){

            if(s[i-1] == sapo[j-1] && s[i] == sapo[j]){
                ver = true;
                j = j+2;
            }

              if(ver){
            conta++;
            }

            if(j >= sapo.size()){
                break;
            }

        }

      


    if(conta == (receba-1)){
        cout << "SIM" << endl;
    }else{
        cout << "NAO" << endl;
    }
}