#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<int, int> freq;
        for(int i = 0;i < n;i++) freq[s[i]]++;

        if(n == 1 && freq['W'] != 1){
            cout << "NO" << endl;
            continue;
        }

        if(n == 1 && freq['W'] == 1){
            cout << "YES" << endl;
            continue;
        }
        


        if(n == 2 && freq['W'] == 1){
            cout << "NO" << endl;
            continue;
        }

        bool f = false;
        int r = 0, b = 0;

        for (int i = 0; i <= n; i++) {
            if (i < n && s[i] != 'W') {
                if (s[i] == 'R') r++;
                else if (s[i] == 'B') b++;
            } else {
                if (r > 0 || b > 0) {
                    if (r == 0 || b == 0) f = true;
                }
                r = b = 0;
            }
        }

        cout << (f ? "NO" : "YES") << "\n";
    }
}
