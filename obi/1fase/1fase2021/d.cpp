#include <bits/stdc++.h>
        
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec;
    while(n--){
        int a; cin >> a;
        if(a != 0){
            vec.emplace_back(a);
        }else{
            vec.pop_back();
        }
    }

    int soma = 0;
    for(int i = 0;i < vec.size();i++){
        soma += vec[i];
    }

    cout << soma << endl;
}