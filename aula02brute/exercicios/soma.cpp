#include <bits/stdc++.h>

using namespace std;

int main(){
 int n;
 int a;
 int soma = 0;

 cin >> n;
 
 while (n > 0){
    cin >> a;
    soma = soma + a;
    n--;
 }
    cout << soma;
}