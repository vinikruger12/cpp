#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        
        int res = 0;
        while(x > 0 || y > 0){
            if(y >= 2){
                y -= 2;
                x -= 7;
                res++;
            }
            else if(y == 1){
                y -= 1;
                x -= 11;
                res++;
            }
            else if(y == 0){
                x -= 15;
                res++;
            }
        }
        cout << res << endl;
        
    }
}