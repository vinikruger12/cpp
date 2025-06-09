#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n >> x;
    vector<int> vec(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    vector<int> novo(n);

    for(int i = 0;i < n;i++){
        if(x % vec[i] == 0){
            novo[i] = i+1;
        }
    }

    int conta = 0;
    for(int i = 0; i < novo.size();i++){
        if(novo[i] != 0){
            conta++;
        }
    }

    cout << conta << endl;
    for(int i = 0;i < novo.size();i++){
        if(novo[i] != 0){
        cout << novo[i] <<  " " ;
        }
    }

    cout << endl;

}