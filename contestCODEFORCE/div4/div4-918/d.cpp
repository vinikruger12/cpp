#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    map<char, int> letras;
    letras['a'] = 1;
    letras['e'] = 1;
    letras['c'] = 0;
    letras['d'] = 0;
    letras['b'] = 0;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string res = "";

        for(int i = 0;i < n;i++){
            if(letras[s[i]] == 1 && letras[s[i+1]] == 0 && letras[s[i+2]] != 0){
                res += s[i];
                res += '.';
            }
            else if(letras[s[i]] == 0 && letras[s[i+1]] == 0){
                res += s[i];
                res += '.';
            }
            else{
                res += s[i];
            }
        }
        int tam = res.size();
        if(res[tam - 1] == '.') res.pop_back();

        cout << res << endl;
    }
}