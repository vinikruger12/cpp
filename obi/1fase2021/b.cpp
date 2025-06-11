#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int contaR = 0;
    vector<pair<char,int>> pares(n);    

    for(int i = 0;i < n;i++){
        char c; cin >> c;    
        int a; cin >> a;    
        pares[i].first = c;
        pares[i].second = a;

        if(c == 'R'){
            contaR++;
        }
    }

    map<int,bool> valor;


    for(int i = 0;i < n;i++){

        for(int j = 1;j < n;j++){
            if(if(pares[i].first == 'R' && pares[i].second == pares[j].second && pares[j].first == 'E')){
                valor[pares[i].second] = 1;
                break;
            }
        }
    }


    vector<pair<int, int>> tempo(contaR);

    int conta = 0;

        for(int i = 0;i < n;i++){
       
            for(int j = 1;j < n;j++){

                if(pares[j].first == 'E' && pares[i].second == pares[j].second){
                break;

                }else if(pares[j].first == 'T'){
                conta = conta + pares[j].second;

                }else{
                conta++;
                }

        }

        tempo[i].first = pares[i].second;
        tempo[i].second = conta;
        conta = 0;

    }

    //for(int i = 0;i < tempo.size();i++){
        //if(valores[pares[i]])
      //  cout << tempo[i].first <<  " " << tempo[i].second << endl;
    //}

    for(int u:pares){
        
        if(valores[u] = 0){
            cout << tempo[u].first << " " << -1 << endl; 
        }else{
            cout << tempo[u].first << " " << tempo[u].second << endl;
        }
    }


}