#include <bits/stdc++.h>
using namespace std;
 
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int conta = 0;
        
        if(s[0] != 'c') conta++;
        if(s[1] != 'o') conta++;
        if(s[2] != 'd') conta++;
        if(s[3] != 'e') conta++;
        if(s[4] != 'f') conta++;
        if(s[5] != 'o') conta++;
        if(s[6] != 'r') conta++;
        if(s[7] != 'c') conta++;
        if(s[8] != 'e') conta++;
        if(s[9] != 's') conta++;

        cout << conta << endl;
    }

}