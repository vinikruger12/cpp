#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
    getline(cin, s);

   size_t prim = s.find("mundo");
   size_t ult = s.rfind("mundo");

   if(prim != string::npos){
    cout << "Primeira aparicao de mundo em " << prim << endl;

    if(ult != prim){
    cout << "Segunda aparicao de mundo em " << ult << endl;
   }else{
    cout << "Mundo aparece apenas uma vez" << endl;
   }
   }else{
    cout << "Mundo nao apareceu";
   }
    
}
