#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    map<char, bool> vis;
    for(int i = 0;i < n;i++){
        vis[s[i]] = 0;
    }
    int conta = 0;
    for(int i = 0;i < n;i++){
        if(!vis[s[i]]){
            conta++;
            vis[s[i]] = 1;
        }
        
    }

    int l = 0, r = 0, res = 0;
   

    cout << conta << endl;
    while(r > n){
       
        cout << res << ' ' << l << ' ' << r << endl;
    }
    cout << res << endl;
}