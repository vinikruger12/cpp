#include <bits/stdc++.h> 

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n;i++){
            cin >> vec[i];
        }
        
        map<int,int> mapa;
        for(auto a:vec){
            mapa[a]++;
        }

        int soma = 0;
        for(auto u:mapa){
            if(u.second > 1){
                soma++;
            }
        }
        
        if(soma == 0){
            cout << '0' << endl;
        }else if(soma == 1){
        cout << '1' << endl;
        }else{
            cout << n - soma << endl;
        }
        
}   

}