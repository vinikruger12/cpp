#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;
const int maxn = 1e6;
int c[100], dp[maxn];

int main(){
    int n, x; cin >> n >> x;
    for(int i = 0;i <= x;i++) dp[i] = inf;
    for(int i = 0;i < n;i++) cin >> c[i];

    dp[0] = 0;

   for(int i = 1;i <= x;i++){
    for(int j = 0;j < n;j++){
        if(i - c[j] >= 0) dp[i] = min(dp[i], dp[i - c[j]] + 1);
    }
   }

    if(dp[x] == inf) cout << -1 << endl;
    else{
        cout << dp[x] << endl;
    }
}