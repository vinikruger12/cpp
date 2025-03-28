#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a;
    int soma;
    int i = 0;
    int c = 0;

    cin >> n;
    soma = 0;
    
    while(i < n ){
        cin >> a;
        i++;
        soma += a;
       c++;
       if(soma >= 1000000){
        break;
       }
    }
    cout << c;
      
   
}