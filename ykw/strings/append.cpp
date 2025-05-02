#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cout << "adicione a primeira palavra na string" << endl;
   getline(cin, s);

   cout << "Antes: " << s << endl;

   s.replace(4, 5, "terra");
   cout << "Depois: " << s << endl;

   
    
}
