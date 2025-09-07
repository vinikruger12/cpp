#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];

        int l = 0, r = n-1, res = 0, conta = 0, somaR = 0, somaL = 0;

        while(l <= r){

            if(somaL == somaR){
                res = max(res, conta);
            }

            if(somaR > somaL){
                somaL += a[l];
                l++;
                conta++;
            }
            else{
                somaR += a[r];
                r--;
                conta++;
            }
            
            if(somaL == somaR){
                res = max(res, conta);
            }

        }
        cout << res << endl;
    }
}