#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int k = 0;
        int maior = 0;
        for(int i = 1;i < n;i++){
            maior = max(k, maior);
            if(s[i-1] == 0 && s[i] == 0) k++;
            else k = 0;
        }

        cout << maior << endl;
    }
}