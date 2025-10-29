#include <bits/stdc++.h>
using namespace std;
 
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >> t;
    while(t--){
    vector<int> a(4);
    for(int i = 0;i < 4;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool ok = 1;
    for(int i = 1;i < 4;i++){
        if(a[i-1] != a[i]){
            ok = 0;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}
}