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

        int i = 1;
        while(a[0] % i == 0 || (a[0] % 2 == 0 && i % 2 == 0)) i++;
        cout << i << endl;
    }

}