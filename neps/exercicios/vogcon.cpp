#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

  string vogais;
  string consoantes;

  for(char c : s){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        vogais += c;
    }else{
        consoantes += c;
    }
  }

    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;

    return 0;
}