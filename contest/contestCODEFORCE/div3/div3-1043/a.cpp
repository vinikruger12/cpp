#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int m; cin >> m;
        string nova; cin >> nova;
        string V, D;
        string qual; cin >> qual;
        
        for(int i = 0;i < m;i++){
            if(qual[i] == 'V') s = nova[i] + s ;
            else s = s + nova[i];
        }
        
        cout << s << endl;
    }
}