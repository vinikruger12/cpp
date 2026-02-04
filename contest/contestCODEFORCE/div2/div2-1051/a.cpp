#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int r = 0;
        int maior = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            maior = max(a[i], maior);
            if(maior == a[i]){
                r = i;
            }
        }
        
        int l = r;
        while(r < n && l >= 0){

            for(int i = l;i <= r;i++){
                a[i]--;
            }
            
            if(r + 1 != n && l - 1 >= 0){
            if(a[r+1] >= a[l-1]){
                r++;
            }
            else if(a[r+1] < a[l-1]){
                l--;
            }
            }
            else if(r + 1 == n) l--;
            else if(l - 1 < 0) r++;

        }

        bool co = 1;
        for(int i = 0;i < n;i++){
            if(a[i] != 0) co = 0;
        }

        if(co) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}