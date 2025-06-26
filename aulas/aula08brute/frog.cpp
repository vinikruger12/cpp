#include <bits/stdc++.h>

using namespace std;
#define int long long

const int maxn = 1e5+5;
int dp[maxn], h[maxn];

int calc(int i){
    if(i == 1){
        return dp[i] = abs(h[0] - h[1]);
    }
    if(i == 0){
        return dp[0] = 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    return dp[i] = min(abs(h[i] - h[i-1]) + calc(i-1), abs(h[i] - h[i-2]) + calc(i-2));
}


signed main(){
  int n; cin >> n;

  for(int i = 0;i < n;i++) dp[i] = -1;

  for(int i = 0;i < n;i++) cin >> h[i];

  calc(n-1);

  for(int i = 0;i < n;i++){
    cout << dp[i] << ' ';
  }
  cout << dp[n-1];
  cout << endl;

}
