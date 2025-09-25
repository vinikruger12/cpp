#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int negativos = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i] < 0) negativos++;
        }
        
        int res = 0;
        if(negativos % 2 != 0) res += 2;
        for(int i = 0;i < n;i++){
            if(a[i] == 0) res++;
        }
        
        cout << res << endl;
        
    }
}