#include <bits/stdc++.h>

using namespace std;

bool f(string ver){
    map<char,int> freq;
    for(int i = 0;i < ver.size();i++) freq[ver[i]]++;
    if(freq['0'] + freq['1'] == ver.size()) return 1;
    else{
        freq['0'] = 0;
        freq['1'] = 0;
    }

    int aux = stoi(ver);
    while(aux % 10 == 0){
        aux /= 10;
    }
    while(aux % 11 == 0){
        aux /= 11;
    }
    while(aux % 101 == 0){
        aux /= 101;
    }
    while(aux % 110 == 0){
        aux /= 110;
    }
    while(aux % 111 == 0){
        aux /= 111;
    }
    while(aux % 1000 == 0){
        aux /= 1000;
    }
    while(aux % 1001 == 0){
        aux /= 1001;
    }
    while(aux % 1010 == 0){
        aux /= 1010;
    }
    while(aux % 1011 == 0){
        aux /= 1011;
    }
    while(aux % 1100 == 0){
        aux /= 1100;
    }
    while(aux % 1101 == 0){
        aux /= 1101;
    }
    while(aux % 1110 == 0){
        aux /= 1110;
    }
    while(aux % 1111 == 0){
        aux /= 1111;
    }
    while(aux % 10000 == 0){
        aux /= 10000;
    }
    while(aux % 100001 == 0){
        aux /= 100001;
    }
    while(aux % 100010 == 0){
        aux /= 100010;
    }
    while(aux % 100011 == 0){
        aux /= 100011;
    }
    while(aux % 100100 == 0){
        aux /= 100100;
    }
    while(aux % 100101 == 0){
        aux /= 100101;
    }
    while(aux % 100110 == 0){
        aux /= 100110;
    }
    while(aux % 100111 == 0){
        aux /= 100111;
    }
    while(aux % 101000 == 0){
        aux /= 101000;
    }
    while(aux % 101001 == 0){
        aux /= 101001;
    }
    while(aux % 101010 == 0){
        aux /= 101010;
    }
    while(aux % 101011 == 0){
        aux /= 101011;
    }
    while(aux % 101100 == 0){
        aux /= 101100;
    }
    while(aux % 101101 == 0){
        aux /= 101101;
    }
    while(aux % 101110 == 0){
        aux /= 101110;
    }
    while(aux % 101111 == 0){
        aux /= 101111;
    }
    while(aux % 110000 == 0){
        aux /= 110000;
    }
    while(aux % 110001 == 0){
        aux /= 110001;
    }
    while(aux % 110010 == 0){
        aux /= 110010;
    }
    while(aux % 110011 == 0){
        aux /= 110011;
    }
    while(aux % 110100 == 0){
        aux /= 110100;
    }
    while(aux % 110101 == 0){
        aux /= 110101;
    }
    while(aux % 110110 == 0){
        aux /= 110110;
    }
    while(aux % 110111 == 0){
        aux /= 110111;
    }
    while(aux % 111000 == 0){
        aux /= 111000;
    }


    if(aux == 1) return 1;
    else{
        string s = to_string(aux);
        
        for(int i = 0;i < s.size();i++) freq[s[i]]++;
        if(freq['0'] + freq['1'] == s.size()) return 1;
        else return 0;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        
        if(f(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}