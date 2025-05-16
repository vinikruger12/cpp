#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int tam = s.size();
        if(s[tam-1] == 's' && s[tam-2] == 'u'){
            s = s.substr(0,tam-2);
            s += 'i';
        } 

        cout << s << endl;
    }
}