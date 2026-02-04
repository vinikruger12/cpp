#include <bits/stdc++.h>
using namespace std;

int main(){
   string um;
   string subs;
   string sub;
   subs = "101";
   sub = "010";

    int n;
    cin >> n;

    for(int i = 0;i < n; i++){
   cin >> um;
   int tam = um.size();
    
    bool ver = false;
        for(int i = 0;i <= tam - 3;i++){
     
   if(um.substr(i, 3) == subs || um.substr(i, 3) == sub){
    ver = true;
        break;
   }

    }
    if(ver){
        cout << "Good" << endl;
    }else{
        cout << "Bad" << endl;
    }
    }

    
}
