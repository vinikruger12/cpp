#include <bits/stdc++.h>

using namespace std;

int somaDigitos(int a){
    int soma = 0;
    
    while(a % 10 != a){
        soma += a%10;
        a -= a%10;
    
        a /= 10;
    }

    soma += a;

    return soma;
}

int main(){
    int a; cin >> a;
    cout << somaDigitos(a) << endl;
    
}