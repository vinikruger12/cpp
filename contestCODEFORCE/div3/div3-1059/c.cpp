#include <bits/stdc++.h>

using namespace std;
 
string bin(int x){
    string s;
    int a = x;
    int k = 0;
    while(a != 0 && a != 1){
        if(a % 2 == 0){
            s += '0';
            a = a/2;
        }
        else if(a % 2 != 0){
            s += '1';
            a = a/2;
        }
    }
    if(a == 1) s += '1';
    else s += '0';
    return s;
}

int toDec(string s){
    int x = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '1') x += pow(2, i);
    }
    return x;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        
        string Sa = bin(a);
        string Sb = bin(b);
        int maior = max(Sa.size(), Sb.size());
        if(Sa.size() < Sb.size()) cout << -1 << endl;
        else{
        for(int i = 0;i < maior;i++){
            if(Sa.size() < maior) Sa += '0';
            if(Sb.size() < maior) Sb += '0';
        }
        string res;
        for(int i = 0;i < maior;i++){
            if(Sa[i] == '1' && Sb[i] == '0') res += '1';
            else if(Sa[i] == '1' && Sb[i] == '1') res += '0';
            else if(Sa[i] == '0' && Sb[i] == '1') res += '1';
            else if(Sa[i] == '0' && Sb[i] == '0') res += '0';
        }
        int x = toDec(res);

        if(x == 0) cout << 0 << endl;
        else if(x <= a){
            cout << 1 << endl;
            cout << x << endl;
        }
        else{
            string um, dois;
            string arm;
            int l = res.size()/2;
            for(int i = 0;i < res.size();i++){
                arm += res[i];
                if(toDec(arm) < a){
                    um += res[i];
                    dois += '0';
                }
                else{
                    dois += res[i];
                    um += '0';
                }
            }
            int g = toDec(um);
            int h = toDec(dois);
            cout << 2 << endl;
            cout << g << ' ' << h << endl;
        }
    }
    }
}

