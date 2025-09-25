#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> c(n);
        for(int i = 0;i < n;i++){
            int a, b; cin >> a >> b;
            if(a <= 10) c[i] = {b, i};
            else c[i] = {0, 0};
        }

        sort(c.begin(), c.end());
        cout << c[n-1].second + 1 << endl;

        
    }
}