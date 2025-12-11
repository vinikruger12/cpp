#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        bool ok = 0;
        if(a % 2 == 0 && b % 2 == 0) ok = 1;
        if(a % 2 == 0 && b % 2 != 0 && a != 0) ok = 1;    
        
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}