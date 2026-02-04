#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n; cin >> n;
        int soma = 0;
        vector<int> vec(n);
        for(int i = 0;i < n;i++) vec[i] = i+1;
        

        if(n > 3){
        int aux = vec[n-1];
        vec[n-1] = vec[n-2];
        vec[n-2] = aux;
        }

        if(n == 1) cout << 1 << endl;

        else{
            int novoN = 0;

            novoN = (vec[n-1] - vec[0] + 1);
            for(int i = 0;i < n;i++) soma += vec[i];
            if(soma%novoN == 0) cout << -1 << endl;
            else{
                for(int i = 0;i < n;i++) cout << vec[i] << ' ';
                 cout << endl;
            }
        }
       
    }

}