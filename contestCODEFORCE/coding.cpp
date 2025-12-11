#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, a; cin >> n >> a;
        vector<int> v(n);

        for(int i = 0;i < n;i++) cin >> v[i];

        int maior = 0, menor = 0;

        for(int i = 0;i < n;i++){
            if(v[i] < a) menor++;
            else if(v[i] > a) maior++;
        }

        if(maior > menor) cout << a + 1 << endl;
        else if(menor > maior) cout << a - 1 << endl;
        else cout << a + 1 << endl;
    }
}