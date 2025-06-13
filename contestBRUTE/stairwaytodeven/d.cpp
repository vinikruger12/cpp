#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, u; cin >> p >> u;
    int x; cin >> x;

    map<int,int> queijo;
    map<int,int> faca;

    for(int i = 0;i < p;i++){
        int posicao; char c; int a;
        cin >> posicao >> c >> a;

        if(c == 'f'){
        faca[posicao] = a;
        }else{
        queijo[posicao] = a;
        
    }
}


    for(int i = 0;i < p;i++){
        bool verfaca = true;
        bool verqueijo = true;
        int posicao; char c; int a;
        cin >> posicao >> c >> a;

        if(c == 'f'){
            for(auto z:faca){
                if(faca[z.first] == a){
                    verfaca = false;
                }
            }
            if(verfaca){
            faca[posicao] = a;
            }else{
            faca[posicao] = x+i;
            }
     
        }else if(c == 'q'){

            for(auto z:queijo){
                if(queijo[z.first] == a){
                    verqueijo = false;
                }
            }
                if(verqueijo){
                queijo[posicao] = a;
            }else{
                queijo[posicao] = x+i;
            }        
    }
}



    int conta = 0;

    for(auto z:queijo){

        if(queijo[z.first] == faca[z.first]){
            conta++;
        }

    }
    
    cout << conta << endl;
}


