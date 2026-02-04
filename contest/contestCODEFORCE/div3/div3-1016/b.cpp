#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s.size() == 1){
            cout << 0 << endl;
        }
        else{
        int pos = 0;
        int maior = 0;
        
        for(int i = 0;i < s.size();i++){
            if(s[i] != '0'){
                pos = i;
            }
        }

        int contazero = 0;
        for(int i = 0;i < pos;i++){
            if(s[i] == '0') contazero++;
        }
        cout << (s.size() - 1) - contazero << endl;

    }
    }

}