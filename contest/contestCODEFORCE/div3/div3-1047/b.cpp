#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        vector<int> res(n);
        int valorMaior = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i]; 
        }

        int qual = n+1;
        for(int i = 0;i < n;i++){
            res[i] = qual - a[i];
        }

        for(int i = 0;i < n;i++){
            cout << res[i] << ' ';
        }

    
        cout << endl;

    }
}