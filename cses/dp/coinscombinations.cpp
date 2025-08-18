#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;
const int maxc = 1e6+6;



int main(){
    int n, x; cin >> n >> x;
    int c[n];
    vector<int> dp((x+1), 0);
    for(int i = 1;i <= x;i++) dp[i] = 0;

    for(int i = 0;i < n;i++){
        cin >> c[i];
    }

    dp[0] = 1;

    for(int i = 1;i <= x;i++){
        for(int j = 0;j < n;j++){
            if(i - c[j] >= 0){
                dp[i] = ((dp[i] + dp[i - c[j]]) % mod);
            }
        }
    }

    cout << dp[x] << endl;


}