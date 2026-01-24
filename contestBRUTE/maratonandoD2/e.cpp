//kruger

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    int sum = 0;
    for(int i = 0;i < n;i++) sum += a[i];

    if(sum % 2 == 0) cout << 0 << endl;
    else{
        int minOdd = 1e9;
        for(int i = 0;i < n;i++){
            if(a[i] % 2 != 0){
                minOdd = min(minOdd, a[i]);
            }
        }

        int minEven = 1e9;
        for(int i = 0;i < n;i++){
            if(a[i] % 2 == 0){
                minEven = min(minEven, a[i]);
            }
        }

        int k = 0, j = 0;
        while(minOdd % 2 != 0){
            k++;
            minOdd /= 2;
        }

        while(minEven % 2 == 0){
            j++;
            minEven /= 2;
        }

        cout << min(j, k) << endl;
    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) solve();
    
}