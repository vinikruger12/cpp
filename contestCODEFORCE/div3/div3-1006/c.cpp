#include <bits/stdc++.h>

using namespace std;

int LOBAO(int x){
    string s = "";
    while(x > 0){
        if(x == 1){
            s += '1';
            break;
        }
        if(x % 2 == 0) s += '0';
        else s += '1';
        x /= 2;
    }

    int conta = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '0') break;
        else conta++;
    }

    int z = 1;
    for(int i = 1;i < conta;i++) z += pow(2,i);
    return z;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n);
        int k = 0;

        for(int i = 0;i < 30;i++){
            if(pow(2,i) >= x){
                k = i;
                break;
            }
        }

        if(x % 2 == 0){
            a[0] = x;
            for(int i = 1;i < n;i++) a[i] = 0;
        }
        else if(x % 2 != 0){
            bool ok = 0;
            int z = LOBAO(x);
            for(int i = 0;i < n;i++){
                if(i <= z) a[i] = i;
                else a[i] = 0;
                
                if(i  == pow(2, k-1) && a[i] == i) ok = 1;
            }

            if(!ok) a[n-1] = x;
        }

        for(int i = 0;i < n;i++) cout << a[i] << ' ';
        cout << endl;
    }
}    
