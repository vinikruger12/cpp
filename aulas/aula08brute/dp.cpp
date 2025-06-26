#include <bits/stdc++.h>

using namespace std;
#define int long long

int dp[1000];

int fibonacci(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0 || dp[n] != 0){
        return dp[n];
    }
    return dp[n] = fibonacci(n-1) + fibonacci(n-2);
}

signed main(){
    for(int i = 0;i < 40;i++){
        cout << fibonacci(i) << " ";
    }

    cout << '\n';

}
