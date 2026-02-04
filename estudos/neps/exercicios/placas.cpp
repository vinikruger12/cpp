#include <bits/stdc++.h>
using namespace std;

int main(){
   // isupper(vetor[]) usa pra verificar se posicao eh letra maiuscula //
    //  isdigit usa pra verificar se eh digito//
   

    string placas;
    cin >> placas;

    if(placas.size() == 8){
        if(isupper(placas[0]) && isupper(placas[1]) && isupper(placas[2]) && placas[3] == '-' && isdigit(placas[4]) && isdigit(placas[5]) && isdigit(placas[6]) && isdigit(placas[7])){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    else if(placas.size() == 7){
        if(isupper(placas[0]) && isupper(placas[1]) && isupper(placas[2]) && isdigit(placas[3]) && isupper(placas[4]) && isdigit(placas[5]) && isdigit(placas[6])){
            cout << "2" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    else{
        cout << "0" << endl;
    }
}