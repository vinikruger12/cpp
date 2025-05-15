#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i){
             cin >> a[i];
        }
        
        sort(a.begin(), a.end());

     
        long long maior = max(a[0] * a[1], a[n - 1] * a[n - 2]);

        cout << maior << endl;
    }
}
