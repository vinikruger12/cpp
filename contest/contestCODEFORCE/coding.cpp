#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        map<int, int> freq;
        sort(a.begin(), a.end());
        for(int i = 0;i < n;i++){
            freq[a[i]]++;
        }
        cout << freq[a[n-1]] << endl;

    }

}   