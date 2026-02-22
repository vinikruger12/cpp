#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> a;
        int k = 1;
        bool yeah = 0;
        for(int i = 1;i < s.size();i++){
            if(s[i - 1] != s[i]){
                if(k > 1) yeah = 1;
                a.push_back(k);
                k = 0;
            }
            k++;
        }
        if(k > 1) yeah = 1;
        a.push_back(k);
        int add = 0;
        if(yeah) add = s[0] != s[n-1] ? 1 : 0;
        int ans = a.size() + add;
        cout << ans << endl;
    }
}