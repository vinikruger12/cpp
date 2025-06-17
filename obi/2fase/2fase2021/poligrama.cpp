#include <bits/stdc++.h>

using namespace std;

vector<int> divisores(int a){
    vector<int> div;
    div.emplace_back(1);
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            div.emplace_back(i);
        }
    }
    return div;
}

bool verifica(string s, vector<int> posi, int i, int &divs){
    int tam = s.size();
    int tamanho_bloco = posi[i];
    int total_blocos = tam / tamanho_bloco;

    map<char,int> freq_total;
    for(char c : s){
        freq_total[c]++;
    }

    map<char,int> freq1;
    for(int j = 0; j < tamanho_bloco; j++){
        freq1[s[j]]++;
    }

    bool ver = true;
    for(auto u : freq_total){
        char c = u.first;
        int total = u.second;
        if(freq1[c] * total_blocos != total){
            ver = false;
            break;
        }
    }

    if(ver){
        divs = tamanho_bloco;
        return true;
    }

    if(i + 1 < (int)posi.size()){
        return verifica(s, posi, i + 1, divs);
    } else {
        return false;
    }
}

int main(){ 
    int n; cin >> n;
    vector<int> vec = divisores(n);
    string s; cin >> s;

    int divs = n;
    bool res = verifica(s, vec, 0, divs);

    if(res){
        cout << s.substr(0, divs) << endl;
    } else {
        cout << "*" << endl;
    }
}
