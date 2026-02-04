#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s;

    map<string, int> verificador;

    for(int i = 0; i < n;i++){
        cin >> s;
        verificador[s]++;

        if(verificador[s] <= 1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    
}