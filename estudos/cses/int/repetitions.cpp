#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    
    int maior = 0;
    int acc = 0;
    for(int i = 1;i < s.size();i++){
        if(s[i-1] == s[i]) acc++;
        else acc = 0;
        maior = max(acc, maior);
    }

    cout << maior + 1 << endl;
}