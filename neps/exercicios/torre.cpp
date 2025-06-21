#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<int> r(n), c(n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            r[i] += a[i][j];
            c[j] += a[i][j];
        }

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            ans = max(ans, r[i] + c[j] - a[i][j]);

    cout << ans << '\n';
}
