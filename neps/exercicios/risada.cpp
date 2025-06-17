#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;cin >> s;

    string vogal;

    for(int i = 0;i < s.size();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vogal += s[i];
        }
    }


    int n = (vogal.size() - 1);
    bool verifica = true;

    int i = 0;
    while(i <= n){
        if(vogal[i] != vogal[n]){
            verifica = false;
            break;
        }else{
        i++;
        n--;
        }   
    }

    if(verifica){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
}