#include <bits/stdc++.h>
#define int long long
using namespace std;
 
bool eh_primo(int x){
    for(int i = 2;i < (int)((sqrt(x))+1);i++){
        if(x % i == 0) return 0;
    }
    return 1;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int x, k; cin >> x >> k;
        
        if(x == 1){
            if(k == 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            if(eh_primo(x)){
                if(k == 1) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else cout << "NO" << endl;
        }
    }

}