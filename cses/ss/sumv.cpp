#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<pair<int, int>> pares(n);

    for(int i = 0;i < n;i++){
        int a; cin >> a;
        pares[i] = {a, i+1};
    }

    int l = 0, r = (n-1);
    sort(pares.begin(), pares.end());

    while(l < r){
       if(pares[r].first + pares[l].first == k){
            cout << pares[l].second << ' '<<  pares[r].second << endl;
            return 0;
       }
       else if(pares[r].first + pares[l].first > k) r--;
       else l++;
    }

    cout << "IMPOSSIBLE" << endl;

}
