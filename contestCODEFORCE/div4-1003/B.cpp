#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        bool flag = true;

        for(int i =1; i < s.size();i++){
            if(s[i-1] == s[i]){
                flag = false;
            }
        }
        if(flag){
            cout << s.size() << endl;
        }else{
            cout << 1 << endl;
        }

        

        
    }
}