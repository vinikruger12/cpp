#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, u; cin >> p >> u;
    int x; cin >> x;

    map<int,int> queijo;
    map<int,int> faca;
    int conta = 0;

    for(int i = 0;i < x;i++){

        int pessoa; char c; int utensilio;
        cin >> pessoa >> c >> utensilio;
        // Como so olho se defini, não me importo com mudar a indexação
        
        if(c == 'f' && !faca.count(utensilio))  // Só defino se precisar
            faca[utensilio] = pessoa;

        else if(c == 'q' && !queijo.count(utensilio))
            queijo[utensilio] = pessoa;

    }
    vector<bool> pareados(p);
    for(auto [numero, pessoa] : queijo){ // Isso decompoe a dupla
        
        // Pode ser que ninguem tenha pego a faca com esse numero, então verifico antes
        if( faca.count(numero) && pessoa == faca[numero]){ 
            if(!pareados[pessoa]) conta++; // Essa pessoa ainda não tem seu par
            pareados[pessoa] = true;

        }
    }

    cout << conta << endl;
}