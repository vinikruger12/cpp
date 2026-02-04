#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        char a; cin >> a;
        string s = "codeforces";
        bool ver = false;

        for(int i = 0;i < s.size();i++){
            if(a == s[i]){
                ver = true;
                break;
            }

        }

        if(ver){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}