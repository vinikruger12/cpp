#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(10);
    vector<int> par;
    vector<int> impar;

    for(int i = 0;i < 10; i++){
        cin >> vec[i];
        

        if(vec[i] % 2 == 0){
            par.push_back(vec[i]);
        }
        else{
            impar.push_back(vec[i]);
        }
    }

    for(int i = 0;i < par.size();i++){
    cout << par[i] << " ";
    }

    cout << endl;

    for(int i = 0;i < impar.size();i++){
    cout << impar[i] << " ";
    }
}