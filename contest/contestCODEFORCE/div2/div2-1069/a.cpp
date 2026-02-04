#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        map<int, int> freq;
        int c = 0;

        for(int i = 0;i < n;i++){
            freq[a[i]]++;
            if(freq[a[i]] == 1) c++;
        }
        
        int res = 1e9+10;
        sort(a.begin(), a.end());
        for(int i = 0;i < n;i++){
            if(a[i] - c >= 0){
                res = a[i];
                break;
            }
        }

        cout << res << endl;

    }
}