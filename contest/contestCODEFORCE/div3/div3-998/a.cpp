#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        vector<int> a(5);
        for(int i = 0;i < 5;i++){
            if(i == 2) a[i] = 0;
            else cin >> a[i];
        }
        
        int res1 = 0, res2 = 0;

        a[2] = a[1] + a[0];

        for(int i = 0;i < 3;i++){
            if(a[i] + a[i+1] == a[i+2]) res1++;
        }

        a[2] = a[3] - a[1];

        for(int i = 0;i < 3;i++){
            if(a[i] + a[i+1] == a[i+2]) res2++;
        }

        int maior = max(res1,res2);
        cout << maior << endl;
        
    }
}