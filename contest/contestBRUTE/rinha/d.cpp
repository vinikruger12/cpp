#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
       string s; cin >> s;
       char c; cin >> c;
       int tamanho = s.size();
       bool ola = false;
        if(tamanho % 2 != 0){
            for(int i = 0;i < tamanho;i++){
                if(c == s[i] && i % 2 == 0){
                    ola = true;
                }
            }

            if(ola){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }

        }else{
            cout << "NO" << endl;
        }
       }
}