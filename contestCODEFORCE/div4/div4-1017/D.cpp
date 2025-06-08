#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string um; cin >> um;
        string dois; cin >> dois;

        bool ver = true;
        for(int i = 0; i < um.size();i++){
            if(um[i] == 'L'){
                if(dois[i] != um[i]){
                    ver = false;
                }
            }
            if(um[i] == 'R'){
                if(dois[i] != um[i] && dois[i+1] != um[i]){
                    ver = false;
                }
            }
        }

        if(ver){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}