#include <bits/stdc++.h>
#define ll long long
using namespace std;


int contazero(int u){
    int conta = 0;
    int a = u;

    while(a % 10 == 0){
        a /= 10;
        conta++;
    }

    return conta;
}

int main(){
    cout << contazero(1110) << endl;
}