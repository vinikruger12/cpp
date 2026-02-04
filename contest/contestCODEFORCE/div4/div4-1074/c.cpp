#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a;
        map<int, int> freq; 

        for(int i = 0;i < n;i++){
            int k; cin >> k;
            
            if(freq[k] > 0) continue;
            
            freq[k]++;
            a.emplace_back(k);
        }

        sort(a.begin(), a.end());
        bool flag = 0;
        int c = 0, res = 0;

        for(int i = 1;i < a.size();i++){
            if(a[i] - a[i-1] == 1){
                c++;
                flag = 1;
            } 
            else{
                flag = 0;
                c = 0;
            }
            
            if(flag) res = max(res, c);
        }
        cout << res + 1 << endl;

    }
}