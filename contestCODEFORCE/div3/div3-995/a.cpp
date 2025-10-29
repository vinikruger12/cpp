#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n+1);
        for(int i = 0;i < n;i++) cin >> a[i];
        for(int i = 0;i < n;i++) cin >> b[i];
        b[n] = 0;
        
        int res = 0;
        int somaA = 0, somaB = 0;
        for(int i = 0;i < n;i++){
            if(a[i] > b[i+1]){
                somaA += a[i];
                somaB += b[i+1];
                res = max(somaA - somaB, res);
            }
        }

        cout << res << endl;
    }

}