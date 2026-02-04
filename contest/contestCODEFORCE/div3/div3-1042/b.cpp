#include <bits/stdc++.h>
    
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n % 2 != 0){
            for(int i = 0;i < n;i++){
                if(i % 2 == 0) cout << -1 << ' ';
                else cout << 3 << ' ';
            }
            cout << endl;
        }
        else if(n % 2 == 0){
            for(int i = 0;i < n;i++){
                if(i % 2 == 0) cout << -1 << ' ';
                else if(i == (n-1) || n == 2) cout << 2 << ' ';
                else cout << 3 << ' ';
            }
            cout << endl;
        }
    }

}