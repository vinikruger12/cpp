#include <bits/stdc++.h>

//A solucao consiste basicamente na soma dos digitos, e para fazer isso se deve somar o resto do inteiro desejado e ir diminuindo o valor do resto do proprio inteiro e depois dividi-lo por 10

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
    int s; cin >> s;
    int a, b; cin >> a >> b;

    int menor = 0;
    for(int i = a;i <= b;i++){
        if(somaDigitos(i) == s){
            menor = i;
            break;
        }
    }

    int maior = 0;
    for(int i = b;i >= a;i--){
        if(somaDigitos(i) == s){
            maior = i;
            break;
        }
    }

    cout << menor << endl;
    cout << maior << endl;
}