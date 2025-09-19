#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        
        vector<int> relogio(4);
        relogio[0] = a;
        relogio[1] = b;
        relogio[2] = c;
        relogio[3] = d;
        sort(relogio.begin(), relogio.end());
        for(int i = 0;i < 4;i++){
            if(relogio[i] == a || relogio[i] == b) relogio[i] = 1;
            else if(relogio[i] == c || relogio[i] == d) relogio[i] = 0;
        }

        bool v = 1;
        for(int i = 1;i < 4;i++){
            if(relogio[i-1] == relogio[i]) v = 0;
        }        

        if(v) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}