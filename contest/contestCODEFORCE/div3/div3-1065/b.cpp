#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];

        vector<int> novo(n);
        
        for(int i = 0;i < n;i++){
            if(a[i] < 0) novo[i] = 0;
            else novo[i] = a[i];
        }

        if(a[0] == -1 && a[n-1] != -1) novo[0] = a[n-1];
        if(a[n-1] == -1 && a[0] != -1) novo[n-1] = a[0];


        int res = 0;

        for(int i = 1;i < n;i++){
            res += novo[i] - novo[i-1];
        }   
        res = abs(res);
        

        cout << res << endl;
        for(int i = 0;i < n;i++) cout << novo[i] << ' ';
        cout << endl;

    }
}