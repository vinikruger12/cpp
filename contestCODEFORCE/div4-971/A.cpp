#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a; int b; 
        cin >> a >> b;
        int mini = min(a, b);
        int maxi = max(a,b);
        int menor = maxi - mini;
        
        cout << menor << endl;
    }
}