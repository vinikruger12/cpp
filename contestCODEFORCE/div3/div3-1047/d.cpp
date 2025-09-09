#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        vector<int> ver(n);
        map<int, int> freq;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            freq[a[i]]++;
            b[i] = a[i];
            ver[i] = i+1;
        }   
        sort(b.begin(), b.end());
        bool ok = 1;
        for(int i = 0;i < n;i++){
            if(b[i] != ver[i]) ok = 0;
        }

        if(ok) cout << -1 << endl;
        else{
            for(int i = 0;i < n;i++){
                if(freq[a[i]] == n){
                    if(a[i] - 1 > 0) cout << a[i] - 1 << ' ';
                    else cout << a[i] + 1 << ' ';
                }
                else{
                    if(a[i] - freq[a[i]] > 0) cout << a[i] - freq[a[i]] << ' ';
                    else cout << a[i] + freq[a[i]] << ' ';
                }
            }

            cout << endl;
        }
    }
}