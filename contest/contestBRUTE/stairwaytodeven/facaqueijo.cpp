#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, u;
    cin >> p >> u;
    int x; cin >> x;
    int conta = 0;

    map<int, int> faca;
    map<int, int> queijo;

    for(int i = 0;i < x;i++){
        int pessoa, utensilio;
        char c;

        cin >> pessoa >> c >> utensilio;

        if(c == 'f' && !faca.count(utensilio)){
            faca[utensilio] = pessoa;
        }

        else if(c == 'q' && !queijo.count(utensilio)){
            queijo[utensilio] = pessoa;
        }
        
    }

    vector<bool> pareados(p);

    for(auto z:queijo){
        if(faca.count(z.first) && z.second == faca[z.first]){
            if(!pareados[z.second]) conta++;
            pareados[z.second] = true;
        }
    }

    cout << conta << endl;
}