#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = n-1;
        int res = 0;
        while(l <= r){
            
            while(s[l] == '0') l++;

            if(s[l] == '1' && s[r] == '0' && r > l){
                swap(s[l], s[r]);
                res++;
                l++;
            }
            else r--;
            
            
        }

        cout << res << endl;
    }
}