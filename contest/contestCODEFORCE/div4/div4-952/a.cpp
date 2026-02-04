#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a, b; cin >> a >> b;
        cout << b[0];
        for(int i = 1;i < a.size();i++){
            cout << a[i];
        }
        cout << ' ';
        cout << a[0];
        for(int i = 1;i < b.size();i++){
            cout << b[i];
        }
        cout << endl;
    }
}