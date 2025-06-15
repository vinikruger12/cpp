#include <bits/stdc++.h>

using namespace std;

//A solucao consiste em verificar a soma do menor com o maior e os dois do meio, é crucial analisar que pode ter numeros negativos, logo usar a funcao abs para apresentar o modulo do numero.

int main(){
  vector<int> vec(4);
  for(int i = 0;i < 4;i++){
    cin >> vec[i];
  }

  sort(vec.begin(), vec.end());
  int soma1 = abs(vec[0] + vec[3]);
  int soma2 = abs(vec[1] + vec[2]);

  int res = abs(soma1 - soma2);
  cout << res << endl;

}