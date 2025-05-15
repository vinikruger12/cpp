#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
       int n; cin >> n;
       string s; cin >> s;

       int e = 0;
       int d = n-1;
        
    while(s[e] != s[d] && e < d){
        e++;
        d--;
    }

         cout << d - e + 1 << endl;
    }
       

      
    }
