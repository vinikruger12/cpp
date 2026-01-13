#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        vector<int> a(3);
        for(int i = 0;i < 3;i++) cin >> a[i];

        sort(a.begin(), a.end());
        for(int i = 0;i < 5;i++){
            a[0]++;
            sort(a.begin(),a.end());
        }

        cout << a[0] * a[1] * a[2] << endl;
    }
}