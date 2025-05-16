#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> vec(n); 
        for (int i = 0; i < n; i++) {
            cin >> vec[i]; 
        }

        string s; 
        cin >> s; 

        map<int, char> numToChar; 
        bool verificada = true; 

        for (int i = 0; i < n; i++) {
            int num = vec[i];
            char cara = s[i];

            
            if (numToChar.count(num)) {
                if (numToChar[num] != cara) {
                    verificada = false; 
                    break;
                }
            } else {
                numToChar[num] = cara; 
            }
        }

       
        if (verificada) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
