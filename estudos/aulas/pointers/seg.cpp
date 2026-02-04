#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    ll s; 
    cin >> n >> s;
    vector<int> vec(n);

    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }   

    ll l = 0, r = 0, soma = 0, res = 0, maior = 0;

    while(r < n){
        
        if(soma + vec[r] <= s){
            soma += vec[r];
            r++;
            maior = r - l;
            res = max(maior, res);
        }
        else{
            soma -= vec[l];
            l++;
        }

        
    }

    cout << res  << endl;

}