#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m, a, b, c; cin >> m >> a >> b >> c;
        vector<int> q(2);
        
        int f1 = m, f2 = m;
        int conta = 0;
        if(f1 - a >= 0){
            conta += a;
            f1 -= a;
        }
        else{
            conta += f1;
            f1 = 0;
        }

        if(f2 - b >= 0){
            conta += b;
            f2 -= b;
        }
        else{
            conta += f2;
            f2 = 0;
        }


        int f = f1+f2;
        
        if(f - c >= 0){
            conta += c;
            f -= c;
        }
        else{
            conta += f;
            f = 0;
        }

        cout << conta << endl;
    }
}