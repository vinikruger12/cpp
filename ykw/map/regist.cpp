#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s;
    map<string, int> conta;

    for(int i = 0; i < n; i++){
        cin >> s;
        conta[s]++;

        if(conta[s] == 1){
            cout << "OK" << endl;
        }else{
            cout << s << (conta[s] - 1) << endl;
        }
    }
}