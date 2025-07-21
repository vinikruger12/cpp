#include <bits/stdc++.h>

using namespace std;
#define int long long

const int maxn = 1e5+5;
int dp[maxn], h[maxn];

signed main(){
    int n;cin >> n;

    for(int i = 0;i < n;i++) cin >> h[i];
    
    for(int i = 0;i < n;i++) dp[i] = 1e9;
    dp[0] = 0;

    for(int i = 0; i < n;i++){
        if(i+2 < n) dp[i+2] = min(dp[i+2], dp[i] + abs(h[i+2] - h[i]));
        
        dp[i+1] = min(dp[i+1], dp[i] + abs(h[i+1] - h[i]));
    }

    for(int i = 0; i < n;i++){
        cout << dp[i] << ' ';
    }
    cout << endl;
}
