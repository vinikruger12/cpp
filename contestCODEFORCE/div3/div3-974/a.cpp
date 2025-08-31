#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];

        int np = 0;
        int soma = 0;
        for(int i = 0;i < n;i++){
            if(k <= a[i]) soma += a[i];

            if(a[i] == 0 && soma > 0){
                np++;
                soma--;
            }
        }

        cout << np << endl;
    }
}