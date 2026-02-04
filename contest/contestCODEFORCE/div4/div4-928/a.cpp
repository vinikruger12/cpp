#include <bits/stdc++.h> 

using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        string s; cin >> s;
        int contaA = 0, contaB = 0;
        
        for(int i = 0;i < 5;i++){
            if(s[i] == 'A'){
                contaA++;
            }
            if(s[i] == 'B'){
                contaB++;
            }
        }

        if(contaB > contaA){
            cout << 'B' << endl;
        }else{
            cout << 'A' << endl;
        }
    }
}