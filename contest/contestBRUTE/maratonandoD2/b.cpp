#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 1) cout << 1 << endl;
        else if(n % 2 != 0) cout << - 1 << endl;
        else{
        vector<int> a(n);
        for(int i = 1;i <= n;i++){
            a[i-1] = i;
        }

        for(int i = 1;i < n;i += 2){
            swap(a[i], a[i-1]);
        }

        for(int i = 0;i < n;i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}
    
}