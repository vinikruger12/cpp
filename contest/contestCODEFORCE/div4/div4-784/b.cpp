#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            freq[a[i]]++;
        }

        int res = -1;
        for(int i = 0;i < n;i++){
            if(freq[a[i]] >= 3){
                res = a[i];
                break;
            }
        }
        cout << res << endl;
    }
}