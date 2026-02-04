#include <bits/stdc++.h>

using namespace std;
#define int long long

const int maxn = 1e6+5, inf = 1e9;
int dp[maxn], c[100], n;

int calc(int x){
    if(dp[x] != -1){
        return dp[x];
    }
    dp[x] = inf;
    for(int i = 0;i < n;i++){
        if(c[i] <= x){
            dp[x] = min(dp[x], calc(x - c[i]) + 1);
        }
    }
    return dp[x];
}




signed main(){
    int x; cin >> n >> x;
    for(int i = 0;i <= x;i++) dp[i] = -1;

    for(int i = 0;i < n;i++) cin >> c[i];

    dp[0] = 0;

    calc(x);
    
    if(dp[x] == inf){
        cout << -1 << endl;
    }
    else{
        cout << dp[x] << endl;
    }

}
