#include <bits/stdc++.h>

using namespace std;


int main(){
    string s; cin >> s;
    int n; cin >> n;
    
    map<pair<char, char>, bool> paresT;
    char a, b;

    for(int i = 0; i < n;i++){
        cin >> a >> b;
        paresT[{a, b}] = true;
    }

    bool verifica = true;
    int conta = 0;
    for(int i = 1;i < s.size();i++){
    
        if(!paresT[{s[i-1], s[i]}]){
            verifica = false;
            break;
        }


    }

    if(verifica){
        cout << "SIM" << endl;
    }else{
        cout << "NAO" << endl;
    }
    
}