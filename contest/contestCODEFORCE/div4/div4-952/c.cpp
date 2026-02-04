#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  
    
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        
        int soma = 0;
        int conta = 0;
        int maior = 0;
        for(int i = 0;i < n;i++){
            soma += a[i];
            maior = max(maior, a[i]);
            if(soma - maior == maior) conta++;
            
        }

        cout << conta << endl;
     
    }   
}