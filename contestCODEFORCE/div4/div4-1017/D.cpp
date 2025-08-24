#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string f; cin >> f;
        string s; cin >> s;

        for(int i = 0;i < f.size();i++){
            if(f[i] == 'R'){
                int conta1 = 0;
                int conta2 = 0;
                for(int j = i;j < s.size();j++){
                    if(f[j] == 'R') conta1++;
                    if(s[j] == 'R') conta2++;
                }
            }
        }
    }
}