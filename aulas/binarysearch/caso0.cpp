#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0;i < n;i++) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int x;
    while(cin >> x){
        bool ok = 0;
        int l = 0, r = (n - 1);
        
        while(l <= r){
            int mid = (l+r)/2;
            if(vec[mid] == x){
                ok = 1;
                break;
            }
            else if(vec[mid] > x) r = mid - 1;
            else if(vec[mid] < x) l = mid + 1;
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    solve();
}