#include <bits/stdc++.h>
using namespace std;

const long long maxn = 1e15+5;
long long dp[maxn];

signed main(){
    long long n, d; cin >> n >> d;
    for(long long i = 0;i < n;i++){
        if(i < d){
        dp[i] = 1;
    }
    else{
        dp[i] = 0;
    }
    }

    for(long long i = 0;i < n;i++){

        if(dp[i] != 1){
            for(long long j = i;j >= (i-d);j--){
                dp[i] += dp[j];
            }
        }

    }

    long long res = 0;
    for(long long i = 0;i < n;i++){
        if(dp[i] % 2 != 0) res++;
    }


    cout << res << endl;

}