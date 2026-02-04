#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int l = 0,r = 0;
        int res = 0;
        for(r = 0;r < k;r++){
            if(s[r] == 'W') res++;
        }

        int cont = res;
        while(r != n){
            if(s[r] == 'W') cont++;
            if(s[l] == 'W') cont--;
            res = min(cont,res);
            r++;
            l++;
        }

        cout << res << endl;
    }
}