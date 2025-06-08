#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m, a , b ,c;
        cin >> m >> a >> b >> c;

        int sentados = 0;

        int l1 = min(a, m);
        int l2 = min(b, m);

        sentados = l1 + l2;

        int d1 = m - l1;
        int d2 = m - l2;

        int resto = min(c, d1+d2);
        sentados += resto;

        cout << sentados << endl;
    }
}