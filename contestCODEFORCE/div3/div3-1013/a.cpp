#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        int res = 0;
        bool ok = 0;
        for(int i = 0;i < n;i++){ 
            cin >> a[i];
        }

        for(int i = 0;i < n;i++){
            freq[a[i]]++;
                        res++;

            if(freq[0] >= 3 && freq[1] >= 1 && freq[3] >= 1 && freq[2] >= 2 && freq[5] >= 1){
                ok = 1;
                break;
            }
        }

        if(ok) cout << res << endl;
        else cout << 0 << endl;
    }
}