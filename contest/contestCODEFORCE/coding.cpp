#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    int t; cin >> t;
    
    map<int, pair<int, int>> hash;

    for(int i = 0;i < n;i++){
       
        if(hash[a[i]].first >= 1){
            cout << hash[a[i]].second << ' ' << i << endl;
            break;
        }

        int k = t - a[i];
        hash[k].first++;
        hash[k].second = i;
    }
    


}