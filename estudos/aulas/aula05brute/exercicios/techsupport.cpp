#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char c;
        int ans = 0;
        for(int i = 0;i < n;i++){
        cin >> c;
        if(c == 'Q'){
            ans++;
        }else if(c == 'A'){
            ans--;
        }
            if(ans < 0){
            ans = 0;
        }
        }

        if(ans <= 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}
