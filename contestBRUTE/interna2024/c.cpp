#include <bits/stdc++.h>

using namespace std;

bool recursao(string s ,char a, char b, int i){
    
    if(i > (s.size()-1)){
        return false;
    }
    
    int conta = 0;

    if(a == s[i-1] && b == s[i]){
        return true;
    }else{
        return recursao(s, a, b, i+1);
    }

}

int main(){
    string s; cin >> s;
    int n; cin >> n;
    char u,v; cin >> u >> v;
    int receba = n;
    int conta = 0;
    n--;
    bool ver = true;
        char a, b; 

    while(n--){
        cin >> a >> b;
     
        if(!recursao(s, a, b, 1)){
            ver = false;
        }
        
    }

    


    if(ver){
        cout << "SIM" << endl;
    }else{
        cout << "NAO" << endl;
    }
}