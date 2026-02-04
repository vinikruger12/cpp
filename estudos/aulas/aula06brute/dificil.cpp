#include <bits/stdc++.h>

using namespace std;

int aleatorio(){
      return (rand() % 10) + 1;
}

int main(){
    srand(time(0));
    int segreto = aleatorio();
      int a; 

    while(a != segreto){
      cin >> a;
    if(a == segreto){
        cout << "Parábens, você acertou o número" << endl;
    }else{
        cout << "Que pena! Você errou, tente de novo!" << endl;
    }

}
}