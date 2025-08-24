#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q; cin >> n >> q;
    vector<int> vec(n);
    vector<int> prefXOR(n);
    for(int i = 0;i < n;i++) cin >> vec[i];
    
    prefXOR[0] = vec[0];
    
    for(int i = 1;i < n;i++){
        prefXOR[i] = prefXOR[i-1] ^ vec[i];
    }



    for(int i = 0;i < q;i++){
        int a, b; cin >> a >> b;
        a--;
        b--;
        int res;
        if(a == 0) res = prefXOR[b];
        else res = prefXOR[b] ^ prefXOR[a-1];
        cout << res << endl;
    }
}