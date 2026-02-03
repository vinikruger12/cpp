#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int i = 0;

        while(i < n && a[i] == n - i){
            cout << a[i] << ' ';
            i++;
        }

        if(i == n){
            cout << endl;
            continue;
        }

        int acha = n - i;
        int r = -1;

        for(int j = i; j < n; j++){
            if(a[j] == acha){
                r = j;
                break;
            }
        }

        for(int j = r; j >= i; j--){
            cout << a[j] << ' ';
        }

        for(int j = r + 1; j < n; j++){
            cout << a[j] << ' ';
        }

        cout << endl;
    }
}
