#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m, a , b ,c;
        cin >> m >> a >> b >> c;

        int r1 = m;
        int r2 = m;
        
        if(a <= r1){
            r1 -= a;
        }else{
            r1 -= a - r1;
        }

        if(b <= r2){
            r2 -= b;
        }else{
            r2 -= b - r2;
        }

        int caso = 0;



     if(r1+r2 == 0){
            cout << m*2 << endl;
        }
       else if(r2 != m && r1 != m){
          caso = (m*2) - (r1+r2);
          caso += c;

        cout << caso << endl;

        }
    }
}