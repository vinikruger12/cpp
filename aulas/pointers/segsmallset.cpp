#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    int l = 0, r = 0, distintos = 0, arm = 0;
    ll res = 0;
    map<int,int> freq;

    while(r < n){
        arm = 0;
        if(freq[a[r]] == 0) arm = 1;
        if(distintos + arm <= k){
            res += (r - l + 1);
            if(freq[a[r]] == 0) distintos++;
            freq[a[r]]++;
            r++;
        }
        else{
            freq[a[l]]--;
            if(freq[a[l]] == 0) distintos--;
            l++;
        }
    }

    cout << res << endl;
}