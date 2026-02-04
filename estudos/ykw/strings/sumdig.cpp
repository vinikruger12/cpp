#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    
    cin >> s;

   
    int soma = 0;

   for(int i = 0;i < n; i++){
    soma += s[i] - '0'; } //converte de char pra int
   

   cout << soma << endl;
}
