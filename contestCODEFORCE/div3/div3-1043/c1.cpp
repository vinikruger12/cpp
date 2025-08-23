#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e9+7;
int dp[maxn];

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int conta = 0;
        int a;
        while(n > 0){
            if(n % 3 == 0){
                a = n/3;
                n -= a*3;
            }
            else{
                conta += 3;
                n--;
            }

           
        }
         if(a-1 == 0){
            conta += 9 + a;
            }
            else{
            conta += pow(3, a+1) + a* pow(3, a-1);
            }
            cout << conta << endl;
    }
}