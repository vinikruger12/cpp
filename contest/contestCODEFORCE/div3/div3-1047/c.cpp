#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int res = 0;
        if(a % 2 == 0 && b % 2 != 0) res = -1;
        else if(((a % 2) != 0) && ((b % 2) == 0)){
            res = (a*(b/2)) + (b/(b/2));
        }
        else if(((a % 2) != 0) && ((b % 2) != 0)){
            res = a*b + 1;
        }
        else if(((a % 2) == 0) && ((b % 2) == 0)){
            res = (a*(b/2)) + (b/(b/2));
        }
        
        if(res % 2 != 0) cout << -1 << endl;
        else cout << res << endl;
  
    }
}