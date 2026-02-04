#include <bits/stdc++.h> 

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a;
        cin >> a;

        int tamanho = a.size()/2;

        bool ver = true;

        if(a.size() % 2 == 0){
        for(int i = 0;i < tamanho;i++){

            if(a[i] != a[i+tamanho]){
                ver = false;
            }
        }}
        else{
            ver = false;
        }

        if(ver){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}