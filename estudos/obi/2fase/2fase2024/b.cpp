#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,n; cin >> k >> n;
    string p; cin >> p;

    map<int,char> PosiChar;
    for(int i = 0;i < k;i++) PosiChar[p[i]] = i;

    string m; cin >> m;
    bool ver = false;
    for(int i = 0;i < n;i++){
        ver = false;

        for(int j = 0;j < k;j++){
            if(m[i] == p[j]) ver = true;
        }
        
        if(!ver) break;
    }

    if(ver) cout << "S" << endl;
    else cout << "N" << endl;
}