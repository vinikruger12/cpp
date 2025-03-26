#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a;
    int soma;
    int i;

    cin >> n;
    soma = 0;
    
    for(i=1; i<=n; i++){
        cin >> a;
        soma += a;
        if(soma == 1000000){
            cout << i;
        }
    }
   
      
   
}