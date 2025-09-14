#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> a(n), b(n), c(n);
        map<string, int> freq;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        for(int i = 0;i < n;i++){
            cin >> b[i];
            freq[b[i]]++;
        }
        for(int i = 0;i < n;i++){
            cin >> c[i];
            freq[c[i]]++;
        }

        int A = 0, B = 0, C = 0;

        for(int i = 0;i < n;i++){
            if(freq[a[i]] == 1) A += 3;
            else if(freq[a[i]] == 2) A++;
        }
        for(int i = 0;i < n;i++){
            if(freq[b[i]] == 1) B += 3;
            else if(freq[b[i]] == 2) B++;
        }

        for(int i = 0;i < n;i++){
            if(freq[c[i]] == 1) C += 3;
            else if(freq[c[i]] == 2) C++;
        }

        cout << A << ' ' << B << ' ' << C << endl;
    }
}
