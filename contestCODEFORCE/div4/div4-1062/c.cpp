#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int par = 0, impar = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i] % 2 == 0) par++;
            else impar++;
        }

        if(impar == par || (impar > par && par != 0) || (par > impar && impar > 0)) sort(a.begin(), a.end());

        for(int i = 0;i < n;i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        

        

    }

}