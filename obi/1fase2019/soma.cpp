#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> vec(n);
    for(int i = 0; i < n;i++){
        cin >> vec[i];
    }
    int res = 0;
    int soma = 0;

    for(int i = 0;i < n;i++){
        soma += vec[i];

        if(vec[i] == k){
            res++;
            soma = 0;
        }else if(soma == k){
            res++;
        }else if(soma > k){
            soma = 0;
        }
    }

    cout << res << endl;
}