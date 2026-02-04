#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, d; cin >> n >> d;
    int res = 0;
    int conta = 0;
    if(d % 2 != 0) cout << n << endl;
    else{
        d++;
        res = n/d;
        conta = n - res;
        cout << conta << endl;
    }

    

}