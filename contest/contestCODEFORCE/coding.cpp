#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int p, q; cin >> p >> q;
        int diff = q - p;
        if(diff <= 0) cout << "Alice" << endl;
        else{
            int a = diff * 2;
            if(a <= p) cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
           
    }
    
}

