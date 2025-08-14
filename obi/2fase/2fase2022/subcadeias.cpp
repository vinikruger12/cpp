#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int maior = 0;

    for(int i = 0;i < n;i++){
        string a = "", b = "";
    
        for(int j = i;j < n;j++){
            a += s[j];
            b = a;
            reverse(b.begin(), b.end());
            int k = a.size();
            if(b == a) maior = max(maior, k);
        }

    }

    cout << maior << endl;
}