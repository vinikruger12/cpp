#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    if(n % 2 == 0){
        cout << n/2 << endl;
    }
    else cout << -n/2 - 1 << endl;    
}

