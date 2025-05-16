#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s; 
    getline(cin, s);

    map<char, int> conta;

    for(int i = 0; i < s.size(); i++){
        conta[s[i]]++;
    }

    for(auto a:conta){
        cout << a.first << " :" << a.second << endl;
    }
}