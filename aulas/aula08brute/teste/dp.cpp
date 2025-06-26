#include <bits/stdc++.h>

using namespace std;

int dp[1000];
int fibo(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0 || dp[n] != 0){
        return dp[n];
    }

    return dp[n] = fibo(n-1) + fibo(n-2);
}


int main(){
    int n; cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    fibo(n);
    for(int i = 0;i <= n;i++){
        cout << fibo(i) << ' ';
    }
    cout << endl;
}