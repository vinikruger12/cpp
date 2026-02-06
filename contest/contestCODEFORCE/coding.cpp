#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int n){
    int k = 0;
    for(int i = 1;i <= n;i++){
        if(i % 2 != 0){
            k -= i;
        }
        else k += i;
    }

    return k;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << f(n) << endl;
}

