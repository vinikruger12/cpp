#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int x = a + b + c;
       int res = (n/x) * 3;
        int outro = n % x;

        if(outro > 0){
            res++;
            outro -= a;
        }
        if(outro > 0){
            res++;
            outro -= b;
        }
        if(outro > 0){
            res++;
            outro -= c; 
        }

        cout << res << endl;
}
}