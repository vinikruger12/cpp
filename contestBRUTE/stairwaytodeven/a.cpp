#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,d;
    cin >> a>>b;
    cin >> d;
    int soma = a+b;
    int limit = soma/d;
    if(soma%d )
    
    vector<int> vec();
    
    
    
    while(soma > 0){
        if(soma % d > 0){
             vec.emplace_back(soma % d);
        }
        
        soma = soma - d;
    }
    return vec;
}

